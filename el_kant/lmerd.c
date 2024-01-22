#include<stdio.h>
void occurence(char tab[],int n){
   for (int i=0;i<n;i++){
      if (tab[i]==tab[i+1]){
         tab[i+1] = "?";
      }
   }
   for (int i=0;i<n;i++){
      printf("%d ",tab[i]);
   }
}
int main (){
   char T[20];
   int a;
   printf("donner la dimension de votre tableau :");
   scanf ("%d",&a);
   for (int j=0;j<a;j++){
      printf("T[%d]=",j);
      scanf("%d",&T[j]);
   }
   occurence(T,a);
}