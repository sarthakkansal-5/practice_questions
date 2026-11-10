#include <stdio.h>

int countVowels(char a[]) {
    int b = 0;
    int c;

    for (c = 0; a[c] != '\0'; c++) {
        if (a[c] == 'a' || a[c] == 'e' || a[c] == 'i' || a[c] == 'o' || a[c] == 'u' ||
            a[c] == 'A' || a[c] == 'E' || a[c] == 'I' || a[c] == 'O' || a[c] == 'U') {
            b++;
        }
    }

    return b;
}

int main() {
    char a[100];
    int b;

    printf("Enter string: ");
    scanf("%s", a);

    b = countVowels(a);

    printf("Vowel Count = %d\n", b);

    return 0;
}