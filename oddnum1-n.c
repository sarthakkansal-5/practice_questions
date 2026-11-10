#include <stdio.h>

int main() {
    FILE *a;
    int b;
    int c;

    printf("Enter n: ");
    scanf("%d", &b);

    a = fopen("odd.txt", "w");

    if (a == NULL) {
        printf("Result: Error opening file!\n");
        return 0;
    }

    for (c = 1; c <= b; c++) {
        if (c % 2 != 0) {
            fprintf(a, "%d\n", c);
        }
    }

    fclose(a);

    printf("Result: Odd numbers successfully written to odd.txt.\n");

    return 0;
}