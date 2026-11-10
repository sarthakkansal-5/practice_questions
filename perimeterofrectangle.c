#include <stdio.h>

int main(){
 int a ,b, perimeter;

 printf("give 1st side=");
 scanf("%d", &a);
 printf("give 2nd side=");
 scanf("%d", &b);

 perimeter= a+b+a+b;

 printf("perimeter is %d \n", perimeter);



    return 0;
}