#include <stdio.h>
int main()
{
   int T[20][20],U[20][20],R[20][20],i,j,n,m,p,e,f;
   printf("donner le nombre de ligne  de votre tableau: ");
   scanf("%d",&n);
   printf("donner le nombre colone  de votre tableau :");
   scanf("%d",&m);
   printf("donner le nombre de ligne  de votre tableau : ");
   scanf("%d",&m);
   printf("donner le nombre de colone  de votre tableau :");
   scanf("%d",&p);
    for (i=0 ; i<n ;i++){
      for (j=0;j<m;j++){
         printf("T[%d][%d]= ",i,j);
         scanf("%d",&T[i][j]);
      }
   }
    for (i=0 ; i<m ;i++){
      for (j=0;j<p;j++){
         printf("R[%d][%d]= ",i,j);
         scanf("%d",&U[i][j]);
      }
   }
   for (e=0;e<n;e++){
      for (f=0;f<p;f++){for (i=0;i<n;i++){for (j=0;j<p;j++){
         U[e][f]=T[i][j]*R[j][i];
         printf("TU[%d][%d]=%d\n",i,j,U[i][j]);
      }
      }
    }
    }
}
