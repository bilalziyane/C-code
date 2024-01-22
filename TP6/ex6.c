#include <stdio.h>
int strlen_bilal(char T[]){
   int i,j=0;
   for (i=0;T[i]!='\0';i++)
       j++;
   return j;
}
int main (){
   char B[100];
   printf("enrez votre chaine de charctere :");
   gets(B);
   printf("la longueur de votre chaine de charactere est :%d",strlen_bilal(B));
}