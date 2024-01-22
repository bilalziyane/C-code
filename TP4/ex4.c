#include<stdio.h>
int main()
{
   int tab [50][50],i,n,b,j,som=0;
   do
   {
      printf("donnez le nombre de ligne  de votre tableau:");
      scanf("%d",&n );
      printf("donnez le nombre de colone  de votre tableau:");
      scanf("%d",&b);
   } while (n>50 && b>50);
   for (i=0;i<n;i++){
      for (j=0;j<b;j++){
        printf("tab[%d][%d]:",i,j);
        scanf("%d",&tab[i][j]);
      }
   }
   for (i=0;i<n;i++){
      for (j=0;j<b;j++)
      { som =som +tab[i][j];
         printf("l'element [%d][%d]=%d  \n",i,j,tab[i][j]);}}
   printf("la somme des elements de tableau est :%d",som);
}