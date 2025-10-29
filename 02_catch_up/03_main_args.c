#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void copy_file(const char *source, const char *destination) {
    FILE* src = fopen(source, "rb");

    if (src == NULL) {
        fprintf(stderr, "Error opening source file '%s': %s\n", source, strerror(errno));
        exit(EXIT_FAILURE);
    }

    FILE* dest = fopen(destination, "wb");

    if (dest == NULL) {
        fprintf(stderr, "Error opening destination file '%s': %s\n", destination, strerror(errno));
        fclose(src);
        exit(EXIT_FAILURE);
    }

    char buffer[1024];
    size_t bytes_read = 0;

     while ((bytes_read = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        fwrite(buffer, 1, bytes_read, dest);
    };

    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", source, destination);
}

int main () {
    // 1. Add main arguments

    // 2. Print the number of arguments and each argument
    
    // 3. Check for correct number of arguments, if not correct, print usage message and exit

    // 4. Call the copy_file function with the provided arguments
    copy_file("binary_files.c", "main_args.c");

    // 5. Compile manually with: gcc main_args.c -o e22copy and test it
    return 0;
}


