#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter n: ");
    scanf("%d", &a);

    int c[a];

    c[0] = 0;
    if (a > 1) {
        c[1] = 1;
    }

    for (b = 2; b < a; b++) {
        c[b] = c[b - 1] + c[b - 2];
    }

    printf("Result: Fibonacci numbers are:\n");
    for (b = 0; b < a; b++) {
        printf("%d\n", c[b]);
    }

    return 0;
}