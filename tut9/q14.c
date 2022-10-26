#include <stdio.h>
#include <stdlib.h>

int main () {
    char s[] = "Hello World!";
    char *cp = s;
    char *cp2 = &s[8];

    printf("%s\n", cp);
    printf("%c\n", *cp);
    printf("%c\n", cp[6]);
    printf("%s\n", cp2);
    printf("%c\n", *cp2);

    return 0;
}
