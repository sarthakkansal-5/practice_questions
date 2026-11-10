#include <stdio.h>

int main() {
    FILE *a;
    int b;
    int c;

    a = fopen("test.txt", "r");

    if (a == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    printf("Integers in file:\n");
    for (c = 0; c < 5; c++) {
        fscanf(a, "%d", &b);
        printf("%d\n", b);
    }

    fclose(a);

    return 0;
}