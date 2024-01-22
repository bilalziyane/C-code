#include <stdio.h>
int main(){
   int *p,ch[10],min;
   for(p=ch;p<ch+10;p++){
      printf("ch[%d]=",p-ch);
      scanf("%d",p);
   }
    min=*(p-10);
   for(p=ch;p<ch+10;p++){
      if(min>*p){
         min=*p;
      }
   }
   printf("le minimum des elements du tableau est:%d",min);
   return 0;
}