#include <stdio.h>
int main (){
   int *a,*b;
   printf("donner votre nombre :");
   scanf("%d",a);
   printf("donner votre deuxieme nombre:");
   scanf("%d",b);
   printf("la somme des 2 nombres est:%d\n",*a+*b);
   printf("soustraction:%d\n",*a-*b);
   printf("multiplication :%d\n",*a * *b);
   printf("div:%d",*a / *b);
}