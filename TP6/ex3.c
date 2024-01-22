#include<stdio.h>
#include<stdlib.h>
int fact(int n){
   int p=1;
   for (int i=1;i<=n;i++){
      p=p*i;
   }
   return p;
}
int main (){
   int a;
   printf("donner votre nombre :");
   scanf("%d",&a);
   printf("le factorielle de %d est :%d",a,fact(a));
}