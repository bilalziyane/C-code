#include <stdio.h>
int main()
{
   int A[10][10],B[10][10],C[10][10],i,j,m,n;
   printf("donnez le nombre de ligne :");
   scanf("%d",&m);
   printf("donnez le nombre de colonne :");
   scanf("%d",&n);
   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
        printf("A[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);}}
   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
        printf("M[%d][%d]:",i,j);
        scanf("%d",&B[i][j]);}}
   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
      C[i][j]=A[i][j]+B[i][j];
      }}
   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
         printf("c[%d][%d]=%d\n",i,j,C[i][j]);}}
   

}