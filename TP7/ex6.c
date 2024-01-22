#include <stdio.h>
int estvoyelle(char a){
   if (a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'||a=='y'){
    return 1;}
   else 
     return 0;
}
void nbvoyelle(char ch[], int*v, int*s){
   char *a;
   *v=0;
   *s=0;
   a=ch;
   for (;*a!='\0';a++){
     if (estvoyelle(*a)==1){
        (*v)++;
     }
     else {
      (*s)++;
      }
   }
}
int main (){ 
   char ch[50];
   int a,b;
   printf("donner votre chaine de caractere:");
   gets(ch);
   nbvoyelle(ch,&a,&b);
   printf("le nombre des voyelles est %d\n",a);
   printf("le nombre des consonne est %d\n",b);
}