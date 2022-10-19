#include <stdio.h>

int array_length(int nums[]);
int test_all_positive(int nums[]);
// int test_all_initialised(int length, int nums[]);
// int test_all_positive(int length, int nums[]);

int main() {
    // -1 means empty
    int nums[6] = {0, 1, 2, 3, 4, -1};
    int length = array_length(nums);
    printf("%d\n", length);
}

// Returns the number of elements in the array
int array_length(int nums[length]) {
    int i = 0;
    int count = 0;
    while (nums[i] != -1 ) {
        count++;
        i++;
    }
    return count;
}

// Returns 1 if all elements of the array are positive, otherwise returns 0.
int test_all_positive(int nums[]){
    // TODO
}

// Returns 1 if all elements of the array nums are initialised
// Otherwise returns 0.
int test_all_initialised(int length, int nums[]) {
    // TODO
}

// Returns 1 if all elements of array nums are positive
// Otherwise return 0
int test_all_positive(int length, int nums[]) {
    // TODO
}