#include <stdio.h>
#include <stdlib.h>

void print_double_array(double array[], int length);

int main () {
    double ff[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    printf("the address of ff   : %p\n", &ff);
    printf("the value of ff     : %p\n", ff);
    printf("the size of ff      : %ld\n", sizeof(ff));
    
    printf("\n========================\n\n");

    double *fp = &(ff[0]);
    printf("the address of fp   : %p\n", &fp);
    printf("the value of fp     : %p\n", fp);
    printf("the size of fp      : %ld\n", sizeof(fp));

    double *ff_pointer = ff;
    ff_pointer[0] = 99.99;

    print_double_array(ff, 6);

    return 0;
}

void print_double_array(double array[], int length) {
    printf("[");
    for (int i = 0; i < length; i++) {
        printf("%lf", array[i]);
        if (i != length - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}