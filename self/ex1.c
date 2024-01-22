#include<stdio.h> 
#include <stdlib.h>
int a,b;
void saisi () 
{
   printf("entrez votre 1 nombre : ");
   scanf("%d",&a);
   printf("entrez votre nombre :");
   scanf("%d",&b);
}
void signe (int a,int b){
   if ((a>0 && b>0)||(a<0 && b<0)){
      printf("les deux nombres %d et %d ont le meme signe .\n",a,b);
   }else      printf("les deux nombres %d et %d ont le signe  different .\n",a,b);
}
int min (){
   int j;
   if (b<a){
   j=b;
   }
   else 
   j=a;
   return j;
}
int max (){
   int k;
   if (a<b){
   k=b;
   } 
   else   
   k=a;
   return k;
}
int main (){

   saisi ();
   signe (a,b);
   printf("le maximum est %d\n",max(a,b));
   printf("le minimum est :%d\n",min(a,b));
   return 0;
   
}