#include <stdio.h>
#include <string.h>
int main ()
{
char txt[265];
   int j=0;
   printf("entrez votre chaine de caractere :");
   gets(txt);
   
   for (int i=0;txt[i]!='\0';i++){
      j++;
   }printf("the number of chars of this string is : %d",j);
}