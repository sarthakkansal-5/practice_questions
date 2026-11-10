#include <stdio.h>

int main() {
    int a;
    int i;
    int factorial = 1;

    printf("Enter n: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        factorial = factorial * i;
    }

    printf(" Factorial = %d\n", factorial);

    return 0;
}