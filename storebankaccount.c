#include <stdio.h>

struct account {
    int a;
    char b[100];
    float c;
};

int main() {
    struct account acc;
    float d;

    printf("Enter account number: ");
    scanf("%d", &acc.a);
    printf("Enter account holder name: ");
    scanf("%s", acc.b);
    printf("Enter initial balance: ");
    scanf("%f", &acc.c);

    printf("Enter amount to deposit: ");
    scanf("%f", &d);
    acc.c = acc.c + d;
    printf("Balance after deposit = %f\n", acc.c);

    printf("Enter amount to withdraw: ");
    scanf("%f", &d);

    if (d > acc.c) {
        printf("Insufficient funds!\n");
    } else {
        acc.c = acc.c - d;
        printf("Balance after withdrawal = %f\n", acc.c);
    }

    return 0;
}