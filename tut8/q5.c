#include <stdio.h>\

#define MAX_LENGTH 4096

int main () {

    // iteratively scan for inputs
    char str_placeholder[MAX_LENGTH];
    while (fgets(str_placeholder, MAX_LENGTH, stdin) != NULL) {
        // check how long it is
        int i = 0;
        int counter = 0;
        // S - H - O - R - T - '\n'
        while(str_placeholder[i] != '\0' && str_placeholder[i] != '\n') {
            counter++;
            i++;
        }
        // print out the sentence
        printf("line %d characters long\n", counter);
    }
    // repeat

}
