#include <stdio.h>

int main () {

    // scanf intergers n and m
    printf("Enter 2 numbers: ");
    int n, m;
    scanf("%d %d", &n, &m);

    // printing integers which is divisble by 7
    while (n <= m) {
        if (n % 7 == 0) {
            printf("%d\n", n);
        }
        printf("n is %d\n", n);
        n = n + 2;
    }

    return 0;
}