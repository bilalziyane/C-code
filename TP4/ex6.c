#include <stdio.h>
int main ()
{
   int M[10][10],i,c,l,j,v[100],k=0;
   do
   {
      printf("donner l nombre de ligne de votre tableu:");
      scanf("%d",&l);
      printf("donner le nombre de colonne de votre tableau:");
      scanf ("%d",&c);
   } while (l>10 && c>10);
   for (i=0;i<l;i++){
      for (j=0;j<c;j++){
        printf("M[%d][%d]:",i,j);
        scanf("%d",&M[i][j]);
        v[k]=M[i][j];
        k++;
        }
   }
     for (i=0 ; i<l*c;i++){
      printf ("%d  ",v[i]);
      }
}