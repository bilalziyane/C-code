#include<stdio.h>
int pal(char *ch)
{
   char *p,*q;
   if (*ch =='\0')
   return 1;
   for (q=ch;*q;q++);//q point sur '\0'
   for (p=ch,q--;p<q;p++,q--)
     if (*p!=*q)
       return 0;
  return 1; 
}



int main ()
{
   char ch[256];
   printf("entrez la chaine :");
   gets (ch);//scanf("%s",ch);
   printf("%d",pal(ch));
   return 0;

}