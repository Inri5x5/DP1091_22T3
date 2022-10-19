#include <stdio.h>
void print_string(char* str);
int main(void) {
    
    // // Getchar()
    // printf("Enter for getchar: ");
    // int getchar_c = getchar();
    // printf("the return value of getchar is %d\n", getchar_c);


    // // getchar() X scanf()
    // printf("Enter for scanf(getchar): ");
    // char scanf_c;
    // int result = scanf(" %c", &scanf_c);
    // printf("the return value of scanf is %d and it scanned %d\n", result, scanf_c);


    // fgets()
    printf("Enter for fgets: ");
    char str[20];
    fgets(str, 20, stdin);
    //printf("%s", str);
    print_string(str);


    // fgets() x scanf()
    printf("Enter for scanf(fgets): ");
    char str2[20];
    scanf(" %s", str2);
    //printf("%s", str2);
    print_string(str2);

    return 0;
}

void print_string(char* string) {
    int i = 0;
    while (i < 6) {
        printf("%d\n", string[i]);
        i++;
    }
}