
// Write a function that takes in a 2D array of ints and multiplies every value in the array by a given int.

#include <stdio.h>

#define ARRAY1_SIZE 5

void scalar_multiple(int rows, int columns, int matrix[rows][columns], int scalar);
void print_array(int row, int column, int array[][ARRAY1_SIZE]);

int main(void) {
    int array1[ARRAY1_SIZE][ARRAY1_SIZE] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    printf("array1: \n");
    print_array(ARRAY1_SIZE, ARRAY1_SIZE, array1);
    scalar_multiple(ARRAY1_SIZE, ARRAY1_SIZE, array1, 5);
    printf("array1 after multiplied: \n");
    print_array(ARRAY1_SIZE, ARRAY1_SIZE, array1);


    return 0;
}

// Print all elements in an array to the screen on one line.
void print_array(int row, int column, int array[][ARRAY1_SIZE]) {
    int y = 0;
    while (y < row) {
        int x = 0;
        while (x < column) {
            printf("%d, ", array[y][x]);
            x++;
        }
        printf("\n");
        y++;
    }
}

// Takes in a 2D array of ints and multiplies every value in the array by a given int
void scalar_multiple(int rows, int columns, int matrix[rows][columns], int scalar){
    // TODO: Finish this function.
    // Step 1 : Iterate over the 2d array
    int y = 0;
    while (y < rows) {
        int x = 0;
        while (x < columns) {
            matrix[y][x] = matrix[y][x] * 5;
            x++;
        }
        y++;
    }

}