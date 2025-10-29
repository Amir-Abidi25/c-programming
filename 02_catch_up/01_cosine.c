#include <stdio.h>

// 1. Create a struct holding a x and y coordinate 

// 2. Creates cosine values for a specific range and stores it in a given Coordinate array 
cosine(){
    // a. Calculate the step size
    // b. Calculate and store data points
}

// 4. Write the values to a file
to_csv() {
    // a. Create a file handler and check for errors
    // b. Write CSV header and data
    // c. Close file handler
}

from_csv() {
    // a. Create a file handler and check for errors
    // b. Read data points from the file and print them to the console
    // c. Close file handler
}

int main() {
    double START = -5;
    double END = 5;
    int RESOLUTION = 100;
    Coordinate data[RESOLUTION]; 
    
    // Calculate data points
    cosine(START, END, RESOLUTION, data);

    // 3. Print some data points

    // Write data points to a file
    to_csv("cosine_data.csv", data, RESOLUTION);

    // Read data points from a file
    from_csv("cosine_data.csv", RESOLUTION);
}