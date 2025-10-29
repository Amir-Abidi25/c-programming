#include <stdio.h>

// 5. Function to change a value by call-by-reference


int main() {
    // 1. Pointer initialization
    int answer = 101;

    //  2. Printing the value using dereferencing

    //  3. Changing the value using dereferencing
    printf("The new answer is %d\n", answer);

    // 4. Passing pointer to function
    change_something(); 
    printf("The changed answer is %d\n", answer);

    // 6. Pointers and arrays 
    int fib_seq[] = {0, 1, 1, 2, 3, 5, 8, 13, 12, 34};

    // 7. Same logic dereferencing the pointer gives...

    // 8. Pointer arithmetic - how to access other elements?

    // 9. Correcting the fib sequence using the change_something function

    // 10. Print the corrected Fibonacci sequence
    printf("Corrected Fibonacci sequence: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fib_seq[i]);
    }
    printf("\n");

    // 11. Don'ts/Pitfalls: uninitialized pointer, changing array pointer, ...

    return 0;
}