#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 1. Create a struct holding a x and y coordinate 
typedef struct
{
    double x;
    double y;
} Coordinate;



// 2. Creates cosine values for a specific range and stores it in a given Coordinate array 
void cosine(double s, double e, int r, Coordinate d[]){
    // a. Calculate the step size
    double step = (e-s) / (r-1);

    // b. Calculate and store data points
    for (int i=0; i < r; i++) {
        d[i].x = s + i * step; 
        d[i].y = cos(d[i].x);
    }
}

// 4. Write the values to a file
void to_csv(char name[], Coordinate d[], int r) {
    // a. Create a file handler and check for errors
    FILE *fp = fopen(name, "w");
    if(!fp){
        perror("Error opening a file");
        exit(EXIT_FAILURE);
    }

    // b. Write CSV header and data
    fprintf(fp, "x,y\n");
    for (int i=0; i < r; i++){
        fprintf(fp, "%lf,%lf\n", d[i].x, d[i].y);
    }
    
    // c. Close file handler
    fclose(fp);
}

void from_csv(char name[], int r) {
    // a. Create a file handler and check for errors
    FILE *fp = fopen(name, "r");
    if(!fp){
        perror("Error opening a file");
        exit(EXIT_FAILURE);
    }

    // b. Read data
    char x, y;
    fscanf(fp, "%c,%c\n", &x, &y);
    printf("HEllO: %c,%c\n", x, y);

    // Array vom Typ Coordinate

    // Iterative read

    // Return or print

    // c. Close file handler
    fclose(fp);
}

int main() {
    double START = -5;
    double END = 5;
    int RESOLUTION = 100;
    Coordinate data[RESOLUTION]; 
    
    // Calculate data points
    cosine(START, END, RESOLUTION, data);

    // 3. Print some data points
    // for (int i=0; i < 5; i++){
    //     printf("x:%lf - y:%lf\n", data[i].x, data[i].y);
    // }

    // Write data points to a file
    to_csv("cosine_data.csv", data, RESOLUTION);

    // // Read data points from a file
    from_csv("cosine_data.csv", RESOLUTION);

    return 0;
}