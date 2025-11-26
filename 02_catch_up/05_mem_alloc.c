
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t capacity = 4;
    size_t position = 0;

    printf("Enter a integer sequence (stop with -1): ");
    
    int *seq = malloc(capacity * sizeof(int));
    if (!seq) {
        perror("Couldn't allocate memory!");
        exit(EXIT_FAILURE);
    }
    
    int buffer = 0;

    while (1) {
        scanf("%i", &buffer);
        if (buffer == -1) {
            break;
        }

        seq[position] = buffer;
        position++;

        if (position >= capacity) {
            printf("Increased capacity!");
            size_t new_cap = capacity + 4;
            int *tmp = realloc(seq, new_cap *sizeof(int));
            if (!tmp) {
                perror("Couldn't allocate memory!");
                free(seq);
                exit(EXIT_FAILURE);
            }
            seq = tmp;
            capacity = new_cap;
        }
    }

    printf("Seq: ");
    for(int i=0; i < capacity; i++) {
        printf("%i ", seq[i]);
    }
    printf("\n");

    free(seq);

    return 0;
}