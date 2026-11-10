#include <stdio.h>

int main() {
    FILE *a;
    int b;
    int c = 0;

    a = fopen("numbers.txt", "r");

    if (a == NULL) {
        printf("Result: Error opening file for reading!\n");
        return 0;
    }

    while (fscanf(a, "%d", &b) != EOF) {
        c = c + b;
    }

    fclose(a);

    // Write the calculated sum back to the file
    a = fopen("numbers.txt", "w");

    if (a == NULL) {
        printf("Result: Error opening file for writing!\n");
        return 0;
    }

    fprintf(a, "%d", c);

    fclose(a);

    printf("Result: File updated with sum = %d\n", c);

    return 0;
}