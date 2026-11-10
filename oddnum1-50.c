#include <stdio.h>

int main() {
    int a;

    printf("Resultis \n");
    for (a = 5; a <= 50; a++) {
        if (a % 2 != 0) {
            printf("%d\n", a);
        }
    }

    return 0;
}