#include <stdio.h>

int main (void) {
    int num = 'A';
    printf("Your number was %d\n", num);
    char char1;
    printf("Enter your letter = ");
    scanf("%c", &char1);
    printf("Your letter is %c\n", char1);
    printf("Your letter ascii value is %d\n", char1);
    
    if (20 < char1){
        printf("Hey something happened\n");
    }
    return 0;
}