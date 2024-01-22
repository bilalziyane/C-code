#include<stdio.h>
#include <string.h>
int main ()
{
   char txt[200],v;
   int l1,l2,i,j=0;
   printf("donner votre ligne de phrase:");
   gets(txt);
   l1=strlen(txt);  
     
   for(i=0;i<l1;i++){
      if (txt[i]=='a')
         j++;}
   printf("le nombre de charactere de cette chaine de caractere est : %d\n",l1);
   printf("le nombre des a dans la chaine de charactere est:%d\n",j);
   for(i=l1-1;i>=0;i--){
      printf("%c",txt[i]);
   }
    /*for (int i = 0; i < l1/2; i++) {
        char temp = txt[i];
        txt[i] = txt[l1 - i - 1];
        txt[l1- i - 1] = temp;}
    printf("\n%s",txt);*/
    for (i=0,j=l1-i;i>j;i++,j--){
      v=txt[i];
      txt[i]=txt[j];
      txt[j]=v;
    }puts(txt);
    
}