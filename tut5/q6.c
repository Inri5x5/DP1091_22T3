// Author: 
// Date: 
// Flip an array from front to back!

// Write a function that takes in an array and its length, and flips all elements in the array. 
// The last element in the array should become the first, the second-last element in the array should become the second, 
// and so on.

#include <stdio.h>

#define ARRAY1_SIZE 5

void array_flip(int length, int nums[length]);
void print_array(int length, int nums[length]);

int main(void) {
    int array1[ARRAY1_SIZE] = {1, 2, 3, 4, 5};
    // {5,4,3,2,1}
    printf("array1: ");
    print_array(ARRAY1_SIZE, array1);
    array_flip(ARRAY1_SIZE, array1);
    printf("array1 (flipped): ");
    print_array(ARRAY1_SIZE, array1);


    return 0;
}

// Print all elements in an array to the screen on one line.
void print_array(int length, int nums[length]) {
    printf("{");
    int i = 0;
    while (i < length) {
        if (i != length - 1) {
            printf("%d, ", nums[i]);
        } else {
            printf("%d}\n", nums[i]);
        }
        i++;
    }
}

// Flip an array such that the first element becomes the last,
// the second element becomes the second last, and so on...
void array_flip(int length, int nums[length]) {
    // TODO: Finish this function.
    int i = 0;
    while (i < length / 2) {
        int temp = nums[i];
        nums[i] = nums[length - 1 - i];
        nums[length - 1 - i] = temp;
        i++;
    }
}