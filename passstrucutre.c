#include <stdio.h>

struct student {
    char a[100];
    int b;
    float c;
};

void printInfo(struct student s) {
    printf("Name: %s, Roll No: %d, CGPA: %.2f\n", s.a, s.b, s.c);
}

int main() {
    struct student d;

    printf("Enter name: ");
    scanf("%s", d.a);
    printf("Enter roll no: ");
    scanf("%d", &d.b);
    printf("Enter CGPA: ");
    scanf("%f", &d.c);

    printInfo(d);

    return 0;
}