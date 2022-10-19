#include <stdio.h>

//scanned in the arguments
int main (int argc, char* argv[]) {

    // iterate the argument 
    // prints every chaharcter

    int i = 0;
    while(argv[1][i] != '\0') {
        printf("%c\n", argv[1][i]);
        i++;
    }

    // printf("the number of arguments is %d\n", argc);
    // printf("the value of the arguments is %s\n", argv[1]);
}