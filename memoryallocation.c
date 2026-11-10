#include <stdio.h>
#include <stdlib.h>

int main() {
    float *a;
    int b;

    a = (float *) malloc(5 * sizeof(float));

    if (a == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    a[0] = 1.1;
    a[1] = 2.2;
    a[2] = 3.3;
    a[3] = 4.4;
    a[4] = 5.5;

    printf("Allocated floats:\n");
    for (b = 0; b < 5; b++) {
        printf("%.1f\n", a[b]);
    }

    free(a);
    return 0;
}