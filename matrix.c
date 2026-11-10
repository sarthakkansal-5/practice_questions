#include <stdio.h>

int main() {
    int a[2][10];
    int b;
    for (b = 0; b < 10; b++) {
        a[0][b] = 2 * (b + 1);
    }
    for (b = 0; b < 10; b++) {
        a[1][b] = 3 * (b + 1);
    }

    printf("Result: Table of 2:\n");
    for (b = 0; b < 10; b++) {
        printf("%d ", a[0][b]);
    }

    printf("\nResult: Table of 3:\n");
    for (b = 0; b < 10; b++) {
        printf("%d ", a[1][b]);
    }
    printf("\n");

    return 0;
}