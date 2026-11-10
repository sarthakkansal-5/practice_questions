#include <stdio.h>

int main() {
    FILE *a;
    char b[100];
    int c;
    float d;

    printf("Enter student name: ");
    scanf("%s", b);

    printf("Enter student age: ");
    scanf("%d", &c);

    printf("Enter student CGPA: ");
    scanf("%f", &d);

    a = fopen("student.txt", "w");

    if (a == NULL) {
        printf("Result: Error opening file!\n");
        return 0;
    }

    fprintf(a, "Name: %s\nAge: %d\nCGPA: %.2f\n", b, c, d);

    fclose(a);

    printf("Result: Student info successfully written to file.\n");

    return 0;
}