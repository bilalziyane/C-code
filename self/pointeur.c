#include <stdio.h>
#include <stdlib.h>
void echange(int x,int y){
   int tp;
   tp=x;
   x=y;
   y=tp;
}
int main (){
   int a=1;
   int b=2;
   printf("donner votre nombre  %d   et %d\n",a,b);
   echange(a,b);
   printf("donner votre nombre   %d    et %d",a,b);
    
}