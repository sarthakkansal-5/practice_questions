#include <stdio.h>

void reverse(int a[], int b) {
    int c;
    int d;

    for (c = 0; c < b / 2; c++) {
        d = a[c];
        a[c] = a[b - c - 1];
        a[b - c - 1] = d;
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b;

    reverse(a, 5);

    printf("Result: Reversed array is:\n");
    for (b = 0; b < 5; b++) {
        printf("%d\n", a[b]);
    }

    return 0;
}