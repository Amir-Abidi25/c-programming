/*
Simple C program to copy a file using binary mode.
*/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void copy_file(const char *source, const char *destination) {
    // 1. Create a file pointer for the file
    FILE *fp_source = fopen(source, "rb");
    if (fp_source == NULL) {
        perror("Es ist falsch!");
        fprintf(stderr, "Probleme mit Datei '%s'\n", source);
        fprintf(stderr, "Probleme %i (%s) mit Datei '%s'\n", errno, strerror(errno), source);
        exit(EXIT_FAILURE);
    }

    FILE *fp_dest = fopen(destination, "wb");
    if (fp_dest == NULL) {
        fclose(fp_source);
        perror("Es ist falsch!");
        exit(EXIT_FAILURE);
    }

    // 4. Do something with the file(s)
    char buffer[1024];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), fp_source )) > 0) {
        fwrite(buffer, 1, bytes_read, fp_dest);
    }

    // 3. Close the files
    fclose(fp_source);
    fclose(fp_dest);

}

int main (int argc,char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    // copy_file();
    return 0;
}