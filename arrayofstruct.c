#include <stdio.h>

struct student {
    char a[100];
    int b;
    float c;
};

int main() {
    struct student s[100];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", s[i].a);
        printf("Enter roll no for student %d: ", i + 1);
        scanf("%d", &s[i].b);
        printf("Enter CGPA for student %d: ", i + 1);
        scanf("%f", &s[i].c);
    }

    printf("Result:\n");
    for (i = 0; i < 2; i++) {
        printf("Student %d -> Name: %s, Roll No: %d, CGPA: %.2f\n", i + 1, s[i].a, s[i].b, s[i].c);
    }

    return 0;
}