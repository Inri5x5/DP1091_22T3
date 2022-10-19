#include <stdio.h>

int is_even(int input);


int main(void) {\
    int num;
    printf("Enter some number: ");
    int result_scanf = scanf(" %d", &num);
    while (result_scanf != EOF) {
        printf("The returned value of scanf is %d\n", result_scanf);
        printf("Enter some number: ");
        result_scanf = scanf(" %d", &num);
    }


	return 0;
}

// return 1 if it even, 0 if odd
int is_even(int input) {
    if (input % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}