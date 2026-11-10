#include <stdio.h>

int main() {
    char a;

    printf("Enter character: ");
    scanf(" %c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf(" its Uppercase\n");
    } else if (a >= 'a' && a <= 'z') {
        printf("its Lowercase\n");
    } else {
        printf(" Not an English letter\n");
    }

    return 0;
}