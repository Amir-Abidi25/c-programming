/** 
* Simlpe Example for environment variables. 
* 
* Environment variables are written in uppercase and depending on the system. 
* They are used to store configuration information for the system and applications.
*
* Common environment variables are: PATH, HOME, USER, SHELL
*
*/
#include <stdio.h>   
#include <stdlib.h>  

extern char **environ;

int main () {
    // C99 defindes: char *getenv(const char *name)
    // printf("PATH: %s\n", getenv("PATH"));
    // printf("HOME: %s\n", getenv("HOME"));

    // POSIX - global env array: **environ or *envp[] 
    // 
    for (int i=0; environ[i] != NULL; i++){
        printf("Env [%i]: %s\n", i, environ[i]);
    }

    return 0;
}