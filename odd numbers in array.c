#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    int c = 0;

    for (i = 0; i< 5; i++) {
        if (a[i] % 2 != 0) {
            c++;
        }
    }

    printf("Count of odd numbers is %d\n", c);

    return 0;
}