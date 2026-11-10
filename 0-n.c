#include <stdio.h>

int main() {
    int a;
    int i;

    printf("Enter n: ");
    scanf("%d", &a);

    printf("Result:\n");
    for (i = 0; i <= a; i++) {
        printf("%d\n", i);
    }

    return 0;
}