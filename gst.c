#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float d;

    printf("Enter price of item 1: ");
    scanf("%f", &a);

    printf("Enter price of item 2: ");
    scanf("%f", &b);

    printf("Enter price of item 3: ");
    scanf("%f", &c);

    a = a + (0.18 * a);
    b = b + (0.18 * b);
    c = c + (0.18 * c);

    d = a + b + c;

    printf("Item 1 with GST = %.2f\n", a);
    printf(" Item 2 with GST = %.2f\n", b);
    printf("Item 3 with GST = %.2f\n", c);
    printf("Total Cost = %.2f\n", d);

    return 0;
}