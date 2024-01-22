#include<stdio.h>
int main ()
{
   int tab [50],n,i,val;
   do
   {
      printf("donner la dimension de votre tableu:");
      scanf("%d",&n);
   } while (n>50);
   for (i=0; i<n ;i++)
   {
      printf("tableau [%d] :", i);
    scanf("%d",&tab[i]);
   }
   printf("entre la valeur de val:");
   scanf("%d",&val);
   for (i=0;i<n;i++){
      if (tab[i]==val){
         printf("la position de val est %d\n",i);
      }
      else if (tab[i]!=val){
         printf("val n'appartient pas au tableua\n");}
         break;
      }
   
}