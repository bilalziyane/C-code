#include<stdio.h>
int main ()
{
   int i,j, n;
   printf("donner votre nombre :");
   scanf("%d",&n);
   for (i=0 ; i<=n ; i++)
   {
      for (j=0 ; j<=n*2 -1 ; j++)
      {
         if (j >n-i && j<n+i)
            printf("*");
         else printf(" ");
      }
      printf("\n");
   }
}