#include<stdio.h>
int main()
{
   int tab[5],tub[5],n,i,som=0;
   printf("donnez la dimension de votre tableau:");
   scanf("%d",&n);
   for (i=0; i<n ;i++)
   {
      printf("U [%d] :", i);
      scanf("%d",&tab[i]);
      printf("V[%d]:",i);
      scanf("%d",&tub[i]);
   }
   for (i=0 ; i<n;i++){
      printf("element [%d] tableau 1 \n",tab[i]);
      printf("element [%d] tableau 2 \n",tub[i]);
      som = som + tab[i]*tub[i];
   }
   /*for (i=0 ;i<n;i++){
      som = som + tab[i]*tub[i];
   }*/
   printf("%d",som);
} 
