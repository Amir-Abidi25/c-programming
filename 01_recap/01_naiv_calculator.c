#include <stdio.h>

int main () {
    float num_1, num_2, result;
    char operator;

    do {
        printf("Enter calculation (e.g. 3.5 * 4.2): ");
        // 1. TODO: Read the input from the user
        // 2. TODO: Validate the operator, it should be one of +, -, * or /
    } while(1);

    // Safe division function 
    // - Programm terminates with EXIT_FAILURE if denominator is 0
    // - Calculate division by 2 with bitshift

    switch (operator)
    {
    case '+':
        result = num_1 + num_2;
        break; // 3. TODO: Why is the break here important?
    case '-':
        result = num_1 - num_2;
        break;
    case '*':
        result = num_1 * num_2;
        break;
    case '/':
        // 4. TODO: What happens if num_2 is 0? Implement `safe_divide`
        result = num_1 / num_2;
        break;
    default:
        printf("This should never happen :)\n");
        break;
    }

    printf("Result: %.2f\n", result);

    return 0;
}