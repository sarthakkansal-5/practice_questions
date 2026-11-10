#include <stdio.h>

int main() {
    int i;
    int sum= 0;

    for (i = 5; i<= 50; i++) {
        sum = sum + i;
    }

    printf("Result: Sum = %d\n", sum);

    return 0;
}