#include <stdio.h>

int main() {
    int a;

    printf("Enter marks: ");
    scanf("%d", &a);

    if (a > 30) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}