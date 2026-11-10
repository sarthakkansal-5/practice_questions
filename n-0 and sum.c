#include <stdio.h>

int main() {
    int a;
    int i;
    int sum= 0;

    printf("Enter n: ");
    scanf("%d", &a);

    printf("Result (Numbers in reverse):\n");
    for (i = a; i >= 1; i--) {
        printf("%d\n", i);
        sum=sum + i;
    }

    printf("Result (Sum): %d\n", sum);

    return 0;
}