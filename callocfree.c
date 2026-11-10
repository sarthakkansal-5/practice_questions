#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int b;

    a = (int *) calloc(5, sizeof(int));

    if (a == NULL) {
        printf("Result: Memory allocation failed!\n");
        return 0;
    }

    for (b = 0; b < 5; b++) {
        a[b] = b + 1;
    }

    printf("Result: Numbers before free:\n");
    for (b = 0; b < 5; b++) {
        printf("%d\n", a[b]);
    }

    free(a);
    printf("Result: Memory freed successfully.\n");

    return 0;
}