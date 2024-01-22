#include <stdio.h>
int main ()
{
   int t[20][20],i,tu[20][20],j,m,n;
   do
   {
      printf("entrez le nombre de ligne de votre tableau:");
      scanf("%d",&m);
      printf("entrez le nombre de colone  de votre tableau:");
      scanf ("%d",&n);
   } while (m>20 && n>20);
   for (i=0 ; i<m ;i++){
      for (j=0;j<n;j++){
         printf("T[%d][%d]= ",i,j);
         scanf("%d",&t[i][j]);
      }
   }
      
      for (i=0;i<n;i++){
       for (j=0;j<m;j++){
        tu[i][j]=t[j][i];
        printf("TU[%d][%d]=%d\n",i,j,tu[i][j]);      }
   }
   
}