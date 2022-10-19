#include <stdio.h>


void squares_func(int square_array[], int length);

int main(void) { 
    int squares[15] = {0};
    squares_func(squares, 15);
    for(int i = 0; i < 15; i++) {
        printf("The value of box with index %d is %d\n", i, squares[i]);
    }
	return 0;
}

void squares_func(int square_array[], int length) {
    for(int i = 0; i < length; i++) {
        square_array[i] = i * i;
    }
}