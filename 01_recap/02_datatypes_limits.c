#include <stdio.h>
#include <limits.h> // Für Integer-Grenzen
#include <float.h> // Für Float-Grenzen
#include <stdint.h> // Für feste Größentypen

int main () {
    // Constants in limits.h: INT_MAX, INT_MIN, UINT_MAX...
    printf("Integer max: %i\n", INT_MAX);
    printf("Integer min: %i\n", INT_MIN);
    printf("Unsigned Integer max: %u\n", UINT_MAX);

    // Constants in float.h: FLT_MAX, FLT_MIN
    printf("Float max: %e\n", FLT_MAX); // %e: wissenschaftliche Dartstellung
    printf("Float min: %e\n", FLT_MIN); 

    // 1. TODO: Binary declaration `0b` (only since C23)
    // check byte size
    printf("Byte size of int: %zu bytes\n\n", sizeof(int));

    // create max, min with 0b
    int bin_int_max = 0b01111111111111111111111111111111;
    int bin_int_min = 0b10000000000000000000000000000000;

    // compare with limits.h
    printf("Binary INT_MAX: %d\n", bin_int_max);
    printf("limits.h INT_MAX: %d\n\n", INT_MAX);

    printf("Binary INT_MIN: %d\n", bin_int_min);
    printf("limits.h INT_MIN: %d\n\n", INT_MIN);

    // Unsigned variant
    unsigned int bin_uint_max = 0b11111111111111111111111111111111;
    unsigned int bin_uint_min = 0b00000000000000000000000000000000;

    printf("Binary UINT_MAX: %u\n", bin_uint_max);
    printf("limits.h UINT_MAX: %u\n\n", UINT_MAX);

    printf("Binary UINT_MIN: %u\n\n", bin_uint_min);

    // Overflow / Underflow
    unsigned int u = UINT_MAX;
    printf("Before unsigned overflow: %u\n", u);
    u++;
    printf("After unsigned overflow: %u\n\n", u);

    int s = INT_MIN;
    printf("Before signed underflow: %d\n", s);
    s--;
    printf("After signed underflow: %d\n", s);

    // 2. TODO: loop approach (only if time)

    // Primitive types sizes are platform dependent --> <stdint.h> for fixed size types
    // - int8_t, int16_t, int32_t, int64_t
    // - uint8_t, uint16_t, uint32_t, uint64_t
    // - 3. TODO: size_t (for sizes and array indexing) 
    //   - Alias for biggest unsigned integer type of the platform 
    //   - Used for sizes and array indexing, malloc/calloc/realloc etc.
    //   - printf format: %zu

    

    return 0;
}