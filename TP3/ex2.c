/*#include <stdio.h>
int main ()
{
    int p,n,som=0 ,prod=1;
    float moy;
    printf("donner le nombre des entier  que vous voulez:\n");
    scanf("%d",&n);
    for (int i=0;i<n ;i++)
    {
        printf ("entrez numero %d :",i+1);
        scanf("%d",&p);
        som = som +p;
        prod = prod*p;
    }
    moy=(float)som/n;
    printf("la somme des %d nombres est %.d\n",n,som );
    printf("le produit des %d nombres est %.d\n",n ,prod );
    printf("la moyenne des %d nombres est %.2f",n,moy);
    return 0;
}*/
/*#include<stdio.h>
int main ()
{
    int n,i,p ,som=0,prod=1;
    float moy;
    printf("combien de nombres vous voulez entrez?\n");
    scanf("%d",&n);
    i=0;
    while (i<n)
    { 
      printf ("entrez votre %d nombre :\n",i+1);
      scanf("%d",&p);
      som=som +p;
      prod=prod*p;
      i++;
    }
    moy=(float)som/n;
    printf("la somme des %d nombres est %.d\n",n,som );
    printf("le produit des %d nombres est %.d\n",n ,prod );
    printf("la moyenne des %d nombres est %.2f",n,moy);
    return 0; 
}*/
#include <stdio.h>
int main ()
{
    int n,i,p ,som=0,prod=1;
    float moy;
    printf("combien de nombres vous voulez entrez?\n");
    scanf("%d",&n);
    do 
    {
        printf ("entrez votre %d nombre :\n",i+1);
      scanf("%d",&p);
      som=som +p;
      prod=prod*p;
      i++;
    }while(i<n);
     moy=(float)som/n;
    printf("la somme des %d nombres est %.d\n",n,som );
    printf("le produit des %d nombres est %.d\n",n ,prod );
    printf("la moyenne des %d nombres est %.2f",n,moy);
    return 0; 
}
