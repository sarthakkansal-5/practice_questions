#include <stdio.h>

int main() {
    int a;
    int i;

    printf("Enter n: ");
    scanf("%d", &a);

    printf("Result:\n");
    for (i= 10; i >= 1; i--) {
        printf("%d x %d = %d\n", a, i, a *i);
    }

    return 0;
}