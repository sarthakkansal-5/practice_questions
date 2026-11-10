#include <stdio.h>

void namaste();
void bonjour();

int main(){
char a;
 printf("enter ur ethencicity(i for indian or f for french)= ");
 scanf(" %c", &a);
 if (a=='f'){
  bonjour();

 } else if (a=='i'){
    namaste();
 }else{
    printf("nope");
 }


    return 0;
}

void namaste(){

    printf("namaste");

}
void bonjour(){

    printf("bonjour");

}