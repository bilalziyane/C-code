#include <stdio.h>
int main ()
{
    int x,y;
    printf("entrez votre premier nombre: " );
    scanf("%d",&x);
    printf ("entrez votre deuxieme nombre: ");
    scanf("%d",&y);
    if ((x*y)>0)
    {
        printf("les deux nombres sont de meme signe ");
    }
    else if ((x*y)<0)
    {
       printf("les deux nombres sont de signe differents");
    }
    return 0;
}