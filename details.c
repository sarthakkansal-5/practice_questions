#include <stdio.h>

struct student {
    char a[100];
    int b;
    float c;
};

int main() {
    struct student d;
    struct student e;
    struct student f;

    printf("Enter name for student 1: ");
    scanf("%s", d.a);
    printf("Enter roll no for student 1: ");
    scanf("%d", &d.b);
    printf("Enter CGPA for student 1: ");
    scanf("%f", &d.c);
    printf("Enter name for student 2: ");
    scanf("%s", e.a);
    printf("Enter roll no for student 2: ");
    scanf("%d", &e.b);
    printf("Enter CGPA for student 2: ");
    scanf("%f", &e.c);
    printf("Enter name for student 3: ");
    scanf("%s", f.a);
    printf("Enter roll no for student 3: ");
    scanf("%d", &f.b);
    printf("Enter CGPA for student 3: ");
    scanf("%f", &f.c);

    printf(" Student 1 -> Name: %s,  Roll No: %d, CGPA: %.2f\n", d.a, d.b, d.c);
    printf("Student 2 -> Name: %s, Roll No: %d, CGPA: %.2f\n", e.a, e.b, e.c);
    printf("Student 3 -> Name: %s, Roll No: %d, CGPA: %.2f\n", f.a , f.b, f.c);

    return 0;
}