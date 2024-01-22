#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
   char txt[200];
   int i,j=0;
   printf("donner votre ligne de phrase:");
   gets(txt);
   for (j=0,i=0 ; txt[i] ; i++)
   {
      txt[j] = txt[i];
      if (txt[i] != 'e') j++;
   }
    txt[j]='\0';
   puts(txt);
}