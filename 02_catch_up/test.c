#include <stdio.h>
#include <stdlib.h>

int main (void){

    FILE *fp = fopen ("test.txt", "a");
    if (!fp) {
        perror("File doesn't exist");
        exit(EXIT_FAILURE);
    }
    fprintf(fp, "\n");
    for (int i=2; i<10; i++)
    fprintf(fp, "Hallo Welt %i\n", i);

    fclose(fp);

    fp = fopen("test.txt", "r");
    
    char line[200];
    int z=1;
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("Zeile %d:%s", z, line);   // Print in das Terminal
        z++;
    }

    fclose(fp);
    

    return 0;
}