// Write a program sum_digits.c which reads characters from its input and counts digits.

// When the end of input is reached it should print a count of how many digits occurred in its input and their sum.

// The only functions you can use are getchar, printf and a very useful function called isdigit() from the ctype.h library 
// which you should #include.

#include <stdio.h>
#include <ctype.h>

int main(void) {

    int sum = 0;
    int num_digits = 0;
    // Step1 : scan every characters 
    int getchar_c = getchar();
    while(getchar_c != EOF) {

        // Step2 : if it is a digit, then add a counter to num_digits, then sum it up
        if (isdigit(getchar_c) != 0) {
            printf(" I have scanned a digit which is %c\n", getchar_c);
            num_digits++;
            printf(" the value of getchar_c is %d\n", getchar_c);
            sum = sum + (getchar_c - '0');  
            printf(" sum is now %d\n", sum);
        }
        // Step3 : if it is not a digit, we could do nothing

        getchar_c = getchar();
    }

    printf("Input contained %d digits which summed to %d", num_digits, sum);
    return 0;
}
