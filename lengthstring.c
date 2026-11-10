#include <stdio.h>

int main() {
    char a[100];
    int b = 0;

    printf("Enter string: ");
    fgets(a, 100, stdin);

    while (a[b] != '\0' && a[b] != '\n') {
        b++;
    }

    printf("Result: Length = %d\n", b);

    return 0;
}