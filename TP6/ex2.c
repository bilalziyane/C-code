#include <stdio.h>
#include <stdlib.h>
float puissance (float x,int n){
   int i;
   float p=1;
   for (i=0;i<n;i++){
      p=p*x;
   }
   return p;
}
int main (){
   int a;
   float b;
   printf("donner votre reel:");
   scanf("%f",&b);
   printf("donner la puissance ");
   scanf("%d",&a);
   printf("%.2f",puissance (b,a));
}