#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int b;

    a = (int *) malloc(5 * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    for (b = 0; b < 5; b++) {
        a[b] = b + 1;
    }
    a = (int *) realloc(a, 8 * sizeof(int));

    a[5] = 6;
    a[6] = 7;
    a[7] = 8;

    printf("Numbers after realloc:\n");
    for (b = 0; b < 8; b++) {
        printf("%d\n", a[b]);
    }

    free(a);
    return 0;
}