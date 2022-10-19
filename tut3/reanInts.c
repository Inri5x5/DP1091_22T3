#include <stdio.h>

int main () {

    // reads integer UNTIL it reads negative number
    // prints out tghe number of positive integer

    // use a loop to keep scannig
    // condition is until it reads negative number

    printf("Enter number: ");
    
    int num1;
    int number_positive_values = 0;
    scanf("%d", &num1);

    while(num1 > 0) {
        number_positive_values ++;
        scanf("%d", &num1);
    }

    printf("The numbe of positive num is %d\n", number_positive_values);
    return 0;
}