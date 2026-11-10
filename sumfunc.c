#include <stdio.h>
int sum(int n);

int main(){
    int n;
printf("write n=");
scanf("%d", &n);
 printf("sumation=%d", sum(n));


    return 0;
}


int sum(int n){
int sum2;
  if (n==1){

    return 1;
  }
 sum2=n+ sum(n-1);

 n--;
return sum2;
}
