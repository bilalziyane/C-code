#include <stdio.h>
int main (){
   int *p,a;
   p=&a;
   printf("donner votre nombre:");
   scanf("%d",p);
   for (int i=1;i<=*p;i++){
      if (*p%i==0){
         printf("%d ",i);
      }
   }
   
}