#include <stdio.h>
#include <string.h>

void salt(char a[]) {
    char b[] = "123";
    strcat(a, b);
}

int main() {
    char a[100];

    printf("Enter password: ");
    scanf("%s", a);

    salt(a);

    printf("Result: Salted Password = %s\n", a);

    return 0;
}