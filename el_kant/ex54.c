#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
   char *p,ch[200];
   int cnt,et,l1,i=0 ;
   printf("donnez votre phrase : ");
   gets (ch);
   l1=strlen(ch);
   for (cnt =0,et=0,p=ch;*p;p++){
      switch (et)
      {
      case 0: if (isspace(*p) ){
         cnt ++;
         et=1;
        }
         break;
      case 1:if (isspace(*p)){
         et=0;
         }
         break;
      }
   }
   printf("%d",cnt );
}