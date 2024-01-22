#include<stdio.h>
int main ()
{
   int U[10][10],i,n,j;
   printf("donner la dimension de votre tableau :");
   scanf("%d",&n);
   for (i=0;i<n;i++){
      for (j=0;j<n;j++){
         if (i==j){
          U[i][j]=1;
         }else{U[i][j]=0;} 
         
      }
      }
   for (i=0;i<n;i++){
      for (j=0;j<n;j++){
         printf("U[%d][%d] = %3d  \n",i,j,U[i][j]);
      }}

}