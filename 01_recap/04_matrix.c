#include <stdio.h>

int ROWS = 3;
int COLS = 4;

int main () {
    int vector_decl[5]; // uninitialized
    int vector_init_0[5] = {0}; // all elements initialized to 0
    int vector_implicit[] = {1, 2, 3, 4, 5}; // size is inferred from the number of initializers
    int vector_explicit[5] = {1, 2, 3, 4, 5}; // explicitly sized and initialized
    
    return 0;
}