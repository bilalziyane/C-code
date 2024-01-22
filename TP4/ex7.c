#include <stdio.h>
int main ()
{
   int  M[10][10],n,i,j,x,oc=0;
   do
   {
   printf("donnez la dimension de votre tableau ");
   scanf ("%d",&n);
   } while (n>10);
   for (i=0;i<n;i++){
      for (j=0;j<n;j++){
         printf("tab[%d][%d]:",i,j);
         scanf("%d",&M[i][j]);
      }
   }
   printf("donner votre entier :");
   scanf("%d",&x);
   for (i=0;i<n;i++){
      for (j=0;j<n;j++){
         if (x==M[i][j])
         {
            oc=oc+1;
         }
      }}
   printf("%d",oc);
     
}