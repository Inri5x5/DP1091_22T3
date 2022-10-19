#include <stdio.h>

int main (void) {

    printf("Enter year = ");
    int year;
    scanf("%d", &year);
    
    if (year % 4 == 0) {
        printf("It is a leap year!\n");
    } else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0) {
        printf("It is not a leap year ! \n");
    } else {
        printf("It is not a leap year\n");
    }
    return 0;
}
