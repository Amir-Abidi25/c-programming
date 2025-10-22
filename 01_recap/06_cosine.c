#include <stdio.h>

// Coordinate struct 
typedef struct {
    double x;
    double y;
} Coordinate;

// cosine(){
    // 1. Calculate the step size
    // 2. Calculate data points
// }

// to_csv() {
    // 1. Create a file handler and check for errors
    // 3. Write CSV header and data
    // 2. Close file handler
// }

int main() {
    int START = -5;
    int END = 5;
    int RESOLUTION = 100;
    Coordinate data[RESOLUTION]; 
    
    int id = 1;
    int *id_ptr = &id;
    int *id_pt2 = id_ptr;

    *id_ptr = ;

    printf("%i\n", id);

    // Calculate data points
    // cosine(START, END, RESOLUTION, data);

    // Print some Examples

    // Write data points to a file
    // to_csv("cosine_data.csv", data, RESOLUTION);
}