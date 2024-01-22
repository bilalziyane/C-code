#include <stdio.h>
int main ()
{
    int a,b;
    float x;
    printf ("entrez la valeur de a :");
    scanf("%d",&a);
    printf ("entrez la valeur de b :");
    scanf ("%d",&b);
    x = -b/a;
    printf("la solution de l'equation %d*x + %d =0 est %.2f",a,b,x);
    return 0;

}
