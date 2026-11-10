#include <stdio.h>

void slice(char a[], int b, int c) {
    char d[100];
    int e = 0;
    int f;

    for (f = b; f <= c && a[f] != '\0'; f++) {
        d[e] = a[f];
        e++;
    }
    d[e] = '\0';

    printf("Result: Sliced Substring = %s\n", d);
}

int main() {
    char a[100];
    int b;
    int c;

    printf("Enter string: ");
    scanf("%s", a);

    printf("Enter start index (n): ");
    scanf("%d", &b);

    printf("Enter end index (m): ");
    scanf("%d", &c);

    slice(a, b, c);

    return 0;
}