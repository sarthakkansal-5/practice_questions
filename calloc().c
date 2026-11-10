#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int *b;
    int c;

    printf("Enter n: ");
    scanf("%d", &a);

    b = (int *) calloc(a, sizeof(int));

    if (b == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    for (c = 0; c < a; c++) {
        printf("Enter number %d: ", c + 1);
        scanf("%d", &b[c]);
    }

    printf("Result: Entered numbers:\n");
    for (c = 0; c < a; c++) {
        printf("%d\n", b[c]);
    }

    free(b);
    return 0;
}