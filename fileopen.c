#include <stdio.h>

int main() {
    FILE *a;

    a = fopen("test.txt", "r");

    if (a == NULL) {
        printf("Result: File does not exist!\n");
    } else {
        printf("Result: File exists and opened successfully.\n");
        fclose(a);
    }

    return 0;
}