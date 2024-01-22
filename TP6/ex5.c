#include <stdio.h>
int i,n;
void lire_tab(int tab[],int n){
   for (i=0;i<n;i++){
      printf("tab[%d]=",i);
      scanf("%d",&tab[i]);
   }
}
void ecrire_tab(int  tab[],int n){
   for (i=0;i<n;i++){
      printf("tab[%d]=%d\n",i,tab[i]);
   }
}
int somme_tab(int B[],int n){
   int p=0;
   for(i=0;i<n;i++){
      p=p+B[i];
   }
   return p;
}
int main (){
   int a;
   printf("donner la dimmension de votre tableau :");
   scanf("%d",&a);
   int T[a];
   lire_tab(T,a);
   ecrire_tab(T,a);
   int sum =somme_tab(T,a);
   printf("la somme des element du tableau est:%d",sum);
}