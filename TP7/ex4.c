#include <stdio.h>
#include <stdlib.h>
int main()
{
 int A[50];
 int X, N, M=0;
 int *P1, *P2;
printf("Donner la dimension du tableau A: ") ;
scanf("%d",&N) ;
for(P1=A;P1<A+N;P1++)
{
 printf("A[%d]=",P1-A);
 scanf("%d",P1);
 }
printf("\n Donner un entier: ") ;
scanf("%d",&X) ;
for(P1=A;P1<A+N ;P1++)
{
 if (*P1==X){
   for(P2=P1;P2<A+N;P2++){
      *P2=*(P2+1);
      N--;
   }
 }}
 
/* Affichage du tableau résultat */
for(P1=A ;P1<A+N ;P1++)
printf("%d ",*P1) ;
 return 0;
}
