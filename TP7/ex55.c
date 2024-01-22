#include <stdio.h>
int main (){
   char ch[50],*p;
   int n=0;
   printf("entrez votre chaine de caractere:");
   gets(ch);
   for(p=ch;*p!='\0';p++,n++){}
   /*on peut faire*/ printf("la longueure de la chaine est:%d",p-ch);
   //printf("%d",n);
}