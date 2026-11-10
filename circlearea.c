#include <stdio.h>

int main(){
 int r;
 float area;
 const float pi= 3.14;

 printf("give radius=");
 scanf("%d", &r);

 area= pi*r*r;

 printf("area is %f \n", area);



    return 0;
}