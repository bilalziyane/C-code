#include <stdio.h>
#include <string.h>
void inverse_ch(char ch[]){
   int i,l;
   char temp;
   l=strlen(ch);
   for (i = 0; i<l/2; i++) {
        temp= ch[i];
        ch[i] = ch[l-i-1];
        ch[l-i-1] = temp;
    }
    puts(ch);
   }
int main(){
   char CH[100];
   printf("entrez votre chaine de caractre:");
   gets(CH);
   inverse_ch(CH);
}