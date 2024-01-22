#include <stdio.h>
#include <string.h>
int main ()
{
   char t[200];
   int l1,l2,i,j,k;
   char S1[10]= "bonjour";
   char S2[100]="tout le monde ";
   /*l1=strlen(S1);
   l2=strlen(S2);
   for (i=0;i<l1;i++){
      t[i]=S1[i];
   }for (j=i,k=0;k<l2;j++,k++){
      t[j]=S2[k];
   }
   printf("%s",t);*/
   strcpy(t,S1);
   strcat(t," ");
   strcat(t,S2);
   puts(t);
}

