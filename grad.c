#include <stdio.h>

int main() {
    int a;

    printf("Enter marks(0-100): ");
    scanf("%d", &a);

    if (a >= 90 && a <= 100) {
        printf("Result: Grade A+\n");
    } else if (a >= 70 && a < 90) {
        printf("Result: Grade A\n");
    } else if (a >= 30 && a < 70) {
        printf("Result: Grade B\n");
    } else {
        printf("Result: Grade C\n");
    }

    return 0;
}