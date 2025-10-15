#include <stdio.h>

int main(void) {
    int i = 100;

    while (i > 0) {
        i--;
        if (i == 0) {
            printf("No more bottles of beer on the wall, no more bottles of beer.\n");
            printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");
            break;
        }
        if (i == 1) {
            printf("%i bottle of beer on the wall, %i bottle of beer.\n", i, i);
            printf("Take one down and pass it around, no more bottles of beer on the wall.\n\n");
        } else {
            printf("%i bottles of beer on the wall, %i bottles of beer.\n", i, i);
            printf("Take one down and pass it around, %i %s of beer on the wall.\n\n", i-1, (i-1 == 1)?"bottle":"bottles");
        } 
    }
    
    return 0;
}