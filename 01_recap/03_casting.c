#include <stdio.h>

const int FIVE = 5;
const int TWO = 2;

int main () {
    float erg;
    erg = FIVE / TWO;

    float five = 5;

    // 1. TODO: Divide the constants FIVE by TWO
    printf("5 / 2 = %f\n", erg);

    // 2. TODO: Explicit vs. implicit casting
    printf("5 / 2 = %f\n", (float)FIVE / TWO); // 
    printf("5 / 2 = %f\n", (float)FIVE / (float)TWO); // Explicit

    return 0;
}