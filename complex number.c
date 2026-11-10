#include <stdio.h>

struct complex {
    int a;
    int b;
};

int main() {
    struct complex c1;
    struct complex c2;
    struct complex sum;

    printf("Enter real part of first complex number: ");
    scanf("%d", &c1.a);
    printf("Enter imaginary part of first complex number: ");
    scanf("%d", &c1.b);

    printf("Enter real part of second complex number: ");
    scanf("%d", &c2.a);
    printf("Enter imaginary part of second complex number: ");
    scanf("%d", &c2.b);

    sum.a = c1.a + c2.a;
    sum.b = c1.b + c2.b;

    printf("Result: Sum = %d + %di\n", sum.a, sum.b);

    return 0;
}