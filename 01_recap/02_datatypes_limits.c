#include <stdio.h>
#include <limits.h> // Für Integer-Grenzen
#include <float.h> // Für Float-Grenzen
#include <stdint.h> // Für feste Größentypen

int main () {
    // Constants in limits.h: INT_MAX, INT_MIN, UINT_MAX...
    printf("Integer max: %i\n", INT_MAX);
    printf("Integer min: %i\n", INT_MIN);

    // Constants in float.h: FLT_MAX, FLT_MIN
    printf("Float max: %f\n", FLT_MAX);
    printf("Float min: %e\n", FLT_MIN); 

    // 1. TODO: Binary declaration `0b` (only since C23)
    // - check byte size
    // - create max, min with 0b
    // - compare with limits.h
    // - Overflow / Underflow
    // - Unsigned variant

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