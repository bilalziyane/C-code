#include <stdio.h>
int apparition (char T[],char a){
int i,j=0;
   for (i=0;T[i]!='\0';i++){
      if (T[i]==a)
        j++;
   }
   return j;}
int main (){
   char B[100],a;
   printf("donner votre chaine de charactere :");
   gets(B);
   printf("donner le charactere que vous voukez:");
   scanf("%c",&a);
   printf("le nombre d'apparition de %c est:%d",a,apparition(B,a));
}