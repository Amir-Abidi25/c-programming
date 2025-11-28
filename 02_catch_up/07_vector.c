/* Here goes the implementation of the vector functions declared in vector.h
   You always need to include the corresponding header file #include "vector.h"
*/

#include "07_vector.h"

void print_vector(Vector *vec) {
   
   printf("Size: %i\nVector: ", vec->size);
   for(size_t i=0; i < vec->size; i++) {
      printf("%i\n", vec->data[i]);
   }
}
