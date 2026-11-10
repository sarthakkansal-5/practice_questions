#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    int *b = a;

    printf("Result: %d\n", *(b + 2));

    return 0;
}