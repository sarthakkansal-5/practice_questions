#include <stdio.h>

int main() {
    int a;

    while (1) {
        printf("Enter number: ");
        scanf("%d", &a);

        if (a % 7 == 0) {
            printf("entred multiple of 7 ths loop break\n");
            break;
        }
    }

    return 0;
}