#include<stdio.h>
#include <stdlib.h>
int a,b,c,d;
int min (int a,int b){
   int min ;
   min =a;
   if (b<a){
      min=b;
   }
   return min ;
}
int max (int a,int b){
   int max ;
   max =a;
   if (b>a){
      max =b;
   }
   return max ;
}
void parite (int a){
   if (a%2==0){
      printf("pair ");
   }else printf("impair ");
}
int absolu(int a){
   int ab=a;
   if (a<0){
      ab =a*-1;
   }
   return ab ;
}
int main (){
   int p,n,j,k;
   printf("doner votre nombre :");
   scanf("%d",&a);
   printf("doner votre nombre :");
   scanf("%d",&b);
   printf("doner votre nombre :");
   scanf("%d",&c);
   printf("doner votre nombre :");
   scanf("%d",&d);
   n=max(a,b);
   j=max (n,c);
   p=min (a,b);
   k=min (p,c);
    printf("le max est :%d\n",max (j,d));
   printf("le min est :%d",min(k,d));
   return 0;
   /*printf("donner votre nombre :");
   scanf("%d",&a);
   printf("la valeur absolue de %d est:%d",a,absolu(a));*/
}