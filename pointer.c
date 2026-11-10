#include <stdio.h>

int main(){
 int i;

int *ptr= &i;
int **pptr= &ptr;

printf("type i=");
scanf("%d", &i);

printf("%u \n", **pptr);

return 0;


}