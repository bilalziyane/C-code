#include<stdio.h>
int main ()
{
    int a,fac=1;
    printf("entrez votre nombre :\n");
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        fac=fac*i;
    }
    printf("le factorielle de %d est %d",a,fac);
}