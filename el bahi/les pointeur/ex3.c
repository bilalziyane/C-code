#include <stdio.h>
void echange(int *a,int *b){
   if ((*a * *b)>0){
      int c=*b;
      *b=*a;
      *a=c;
   }else {
      int d=*a+*b;
      int e=*a * *b;
      *a=d;
      *b=e;
   }
}
int main(){
   int x,y;
   printf("donner votre premier nombre :");
   scanf("%d",&x);
   printf("donner votre deuxieme nombre :");
   scanf("%d",&y);
   echange(&x,&y);
   printf("la nouvel valeur de premier nombre est :%d\n",x);
      printf("la nouvel valeur de deuxieme nombre est :%d\n",y);

   
   
}