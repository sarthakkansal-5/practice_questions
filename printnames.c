#include <stdio.h>

int main() {
    char a[] = "Sarthak";
    char b[] = "Kansal";
    int c;

    printf("First Name:\n");
    for (c = 0; a[c] != '\0'; c++) {
        printf("%c\n", a[c]);
    }

    printf("Last Name:\n");
    for (c = 0; b[c] != '\0'; c++) {
        printf("%c\n", b[c]);
    }

    return 0;
}