#include<stdio.h>
int main ()
{
   int tab [50],n,i,som=0,j;
   do
   {
      printf("donnez la dimension de votre tableau:");
      scanf("%d",&n);
   } while (n>50);
   
   for (i=0; i<n ;i++)
   {
      printf("bleau [%d] :", i);
    scanf("%d",&tab[i]);
   }
   for (j=0; j<n ;j++){
      printf("element [%d] = %d\n",j,tab[j]);
   }
   for (j=0;j<n;j++){
      som=som+tab[j];
   }
   printf("la somme des element de tableau est:%d",som);   
}