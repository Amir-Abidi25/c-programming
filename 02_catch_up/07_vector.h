/* The modular approach in C is split into header files (.h) and implementation files (.c).
   The header file contains the declarations of the data structures and functions,
   while the implementation file contains the actual code.

    It is best practice to use include guards (preprocessor directives) in header files to prevent multiple inclusions.
    #ifndef FILENAME_H
    #define FILENAME_H

    The declarations go here (between the #ifndef and #define).

    #endif
*/
// Inlcude Guards
#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    size_t size;
    int* data;
} Vector;


/**
 * Print my vetor
 * 
 * @param Pointer to a specific vector
 */
void print_vector(Vector *vec);


#endif


