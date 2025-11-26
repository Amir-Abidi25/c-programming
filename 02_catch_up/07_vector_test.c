#include "07_vector.h"

int main(void) { 
    // Init vector
    Vector vec;

    // Assign values to vec
    int array[] = {1, 2, 3};
    vec.size = 3;
    vec.data = array;

    // Print vector to console
    print_vector(&vec);

    return 0;
}