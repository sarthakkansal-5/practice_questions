#include <stdio.h>

int main() {
    int a;

    while (1) {
        printf("Enter number: ");
        scanf("%d", &a);

        if (a % 2 != 0) {
            printf("odd num thus loop break\n");
            break;
        }
    }

    return 0;
}