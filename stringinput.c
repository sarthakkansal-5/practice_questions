#include <stdio.h>

int main() {
    char a[100];
    char b;
    int c = 0;

    printf("Enter string: ");
    while (1) {
        scanf("%c", &b);
        if (b == '\n') {
            break;
        }
        a[c] = b;
        c++;
    }
    a[c] = '\0';

    printf("Result: %s\n", a);

    return 0;
}