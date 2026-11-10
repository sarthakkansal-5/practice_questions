#include <stdio.h>

struct address {
    int a;
    char b[100];
    char c[100];
    char d[100];
};

int main() {
    struct address p[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter house no for person %d: ", i + 1);
        scanf("%d", &p[i].a);
        printf("Enter block for person %d: ", i + 1);
        scanf("%s", p[i].b);
        printf("Enter city for person %d: ", i + 1);
        scanf("%s", p[i].c);
        printf("Enter state for person %d: ", i + 1);
        scanf("%s", p[i].d);
    }

    printf("Result:\n");
    for (i = 0; i < 5; i++) {
        printf("Person %d Address: House No %d, Block %s, %s, %s\n", i + 1, p[i].a, p[i].b, p[i].c, p[i].d);
    }

    return 0;
}