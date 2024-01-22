#include <stdio.h>
#include<string.h>
void duplicate(char *p);
int main(){
   char s[200];
   printf("donner votre chaine de caractere :");
   gets(s);
   duplicate(s);
   printf("%s",s);
}
void duplicate(char *p){
   int a=strlen(p);
   for (int i=0;i<a;i++){
      int j=i+1;
      for(int j=i+1;j<a;)
      {
         if (p[j]==p[i]){
            for (int  k=j;k<a-1;k++){
               p[k]=p[k+1];
             a--;  
            }
         }else j++;
      }
    }
}
