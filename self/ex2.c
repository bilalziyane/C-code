#include <stdio.h>
#include <stdlib.h>
int x;
void  tableau(){
   printf("le tableau de multiplication de %d est",x);
   for (int i=0;i<=10;i++){
      printf("%d x %d =%d\n",x,i,i*x);
   }
}
int cube (){
   int p;
   printf("donner votre nombre :");
   scanf("%d",&x);
   p=x*x*x;
   return p;
}
void bise (){
   printf("donnez votre nombre :");
   scanf("%d",&x);
   if (x%4==0 && x%100!=0){
      printf("bisexile ");
   }else printf("nope ");
}
int main (){
  bise (x);
}