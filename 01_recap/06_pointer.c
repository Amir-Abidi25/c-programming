#include <stdio.h>

// 5. Function to change a value by call-by-reference
void change_something(int *value) {
    *value = 21;
}

int main() {
    // 1. Pointer initialization
    int answer = 101;
    int *answer_ptr = &answer;

    //  2. Printing the value using dereferencing
    printf("2.Content of answer via pointer: %i\n", *answer_ptr); 
    printf("2.Pointer address: %p\n", answer_ptr); 

    //  3. Changing the value using dereferencing
    *answer_ptr = 42;
    printf("3.The new answer is %d\n", answer);

    // 4. Passing pointer to function
    change_something(&answer); 
    // change_something(answer_ptr); 
    printf("4.The changed answer is %d\n", answer);

    // 6. Pointers and arrays 
    int fib_seq[] = {0, 1, 1, 2, 3, 5, 8, 13, 12, 34};
    int *fib_ptr = fib_seq;

    // 7. Same logic dereferencing the pointer gives...
    printf("7.Content of *fib_ptr: %i\n", *fib_ptr);

    // 8. Pointer arithmetic - how to access other elements?
    fib_ptr++;
    printf("8.Content of *fib_ptr: %i\n", *fib_ptr);

    // 9. Correcting the fib sequence using the change_something function
    // change_something(fib_ptr + 7);
    // change_something(fib_ptr[7]);
    change_something(&fib_seq[8]);

    // 10. Print the corrected Fibonacci sequence
    printf("10. Corrected Fibonacci sequence: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fib_seq[i]);
    }
    printf("\n");

    // 11. Don'ts/Pitfalls: uninitialized pointer, changing array pointer, ...
    // fib_seq++; // Array-Variablen sind Pointer allerdings Konstanten auf das erste Element
    // Dangling Pointer 
    // int *ptr;
    // printf("11. Random memory access: %i", *ptr);

    return 0;
}