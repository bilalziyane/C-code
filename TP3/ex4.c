#include<stdio.h>
int main()
{
    int a,x, max ,min ,som=0;
    printf("%d",max);
    float moy;
      printf("combien de nombres vous voulez saisir ?\n");
      scanf("%d",&x);
    for (int i=0;i<x;i++)
    {
        printf("entrez votre nombre :");
        scanf("%d",&a);
        som=som+a;
        moy=(float)som/x;
        if (a<min)
        {
            min=a;
        }
        else if (a>max)
        {
            max=a;
        }
    }
    printf("le maximum est %d :\n",max);
    printf("le minimum est %d:\n",min);
    printf("la somme des  %d nombres est :%d \n",x,som);
    printf("la moyenne des %d nombres est : %.2f\n",x,moy);    
}
