#include <stdio.h>
#include <string.h>
void tableau(char tab[],char x){
   
}
int main (){
   char T[200],a;
   printf("donner votre chaine de caractere:");
   gets(T);
   printf("donner la lettre que vous voulez:");
   scanf("%c",&a);
   char *p,*p1;
   int n;
   n=strlen(T);
   printf("%d\n",n);
   for(p=T;p<T+n;p++){
      if (*p==a){
         for(p1=p;p1<p+n;p1++){
            *p1=*(p1+1);
            n--;
         } }
   }for(p1=T ;p1<T+n ;p1++)
     printf("%c",*p1) ;

}