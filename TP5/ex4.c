#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
   char ch[200],v;
   int l1,i,j=0;
   printf("donner votre ligne de phrase:");
   gets(ch);
   l1=strlen(ch);
   for (i=0;i<l1;i++){
      if (isspace(ch[i])==0 && isspace(ch[i+1])!=0)
      j++;}
   
   printf("%d",j+1);
}