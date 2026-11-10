#include <stdio.h>

int main() {
    char a[100];

    printf("Enter string: ");
    fgets(a, 100, stdin);

    printf("Result: ");
    puts(a);

    return 0;
}