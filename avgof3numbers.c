#include <stdio.h>

int main() {
    float a, b, c, average;
    
printf("give 1st number=");
 scanf("%f", &a);
 printf("give 2nd number=");
 scanf("%f", &b);
 printf("give 3rd number=");
 scanf("%f", &c);

    average = (a + b + c) / 3.0;

    printf("Average = %f\n", average);

    return 0;
}