#include <stdio.h>

const int ROWS = 2;
#define COLS 2

int main () {
    // int matrix[ROWS][COLS] = {{1,2}, {3, 4}}; 
    int matrix[2][3];
    int vector[10];

    for (int i=0; i < ROWS; i++) {
        for (int y=0; y < COLS; y++) {
            matrix[i][y] = i + y + 1;
            printf("%i\n", matrix[i][y]);
        }
    }

    return 0;
}