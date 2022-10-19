#include <stdio.h>

// Function prototype
void my_func();

// Global Scope
int global_num = 10;

int main () {
    // Local Scope
    int x = 10;
    printf("%d\n", x);
    
    my_func();
    printf("%d\n", y);

}

void my_func() {
    int y = 8;
    printf("%d\n", y);
}