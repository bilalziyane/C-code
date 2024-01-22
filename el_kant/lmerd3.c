#include<stdio.h>
void occurance(int tab[],int *taille){
   int valeur,j,k;
    for(int i=0;i<*taille;i++ ){
      valeur=tab[i];
       j=i+1;
      while(j<*taille)
      {
         if (tab[j]==valeur){
            for ( k=j;k<*taille-1;k++){
               tab[k]=tab[k+1];
               
            }(*taille)--;
         }else j++;
      }
    }
    printf("Tableau final : ");
    for (int i = 0; i <*taille; i++) {
        printf("%d ", tab[i]);
    }
}
int main(){
   int T[50],i,taille;
   printf("donner la taille de votre tableau:");
   scanf("%d",&taille);
   for(i=0;i<taille;i++){
      printf("T[%d]=",i);
      scanf("%d",&T[i]);
   }
   occurance(T,&taille);
   /* printf("Tableau final : ");
    for (int i = 0; i <*taille; i++) {
        printf("%d ", tab[i]);
    } ila dernaha hna we should put pointeur f fonction machi tableau*/
    
   
}