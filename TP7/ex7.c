#include <stdio.h>
void chercherval(int tab[],int n,int *pos ,int *nbocc){
   int *j;
   *nbocc=0;
   for(j=tab;j<tab+n;j++){
      if (*j==n){
         pos=j;
         (*nbocc)++;
      }else (*j==-1);
   }
  
   

}
int main(){
   int T[5],a,*b,*c;
   printf("donner votre tableau:\n");
   for (int i=0;i<5;i++){
      printf("T[%d]",i);
      scanf("%d",&T[i]);
   }
   printf("donner le nombre que vous voulez:");
   scanf("%d",&a);
   chercherval(T,a,b,c);
    printf("%d",b);
    printf("%d",c);
}