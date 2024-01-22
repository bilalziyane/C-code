#include <stdio.h>
int main()
{
   int tab[10];
   int i,n;
   for(i=0;i<10 ;i++)
   {
      printf("tableau [%d] :", i);
      scanf("%d",&tab[i]);
   }
   for (i=0;i<10;i++){
      printf("%d \n",tab[i]);
   }
   printf("les valeurs positifs :");
   for (i=0;i<10;i++){
      if (tab[i]>0)
      printf("%d\n",tab[i]);
   }
   printf("les valeurs negatifs :");
   for (i=0;i<10;i++){
      if (tab[i]<0)
      printf("%d\n",tab[i]);
   }
}