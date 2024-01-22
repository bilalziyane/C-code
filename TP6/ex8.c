#include <stdio.h>
void  ajoute_ch(char ch2[],char ch1[]){
   char ch[100];
    int i,j=0,k,f;
    for(i=0;ch1[i]!='\0';i++){
      ch[i]=ch1[i];
      j++;
    }
    ch[j]=' ';
    for(k=j+1,f=0;ch2[f]!='\0';f++,k++){
       ch[k]=ch2[f];
    }
    puts(ch);
}
int main (){
   char ch1[100],ch2[100],ch[100];
   printf("donnez votre premiere chaine de charactere :");
   gets (ch1);
   printf("donnez votre premiere chaine de charactere :");
   gets (ch2);
   ajoute_ch(ch2,ch1);
}