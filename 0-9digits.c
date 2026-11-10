#include <stdio.h>

int main() {
    char a;
    printf("Enter a chracater: ");
    scanf(" %c", &a);

    if (a >= '0' && a <= '9') {
        printf("'%c' is a digit.\n", a);
    } else {
        printf("'%c' is not a digit.\n", a);
    }

    return 0;
}