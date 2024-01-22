#include <stdio.h>
#include <math.h>
int main ()
{
    int x,n,some=0;
    float s;
    printf("donner voter entier k:");
    scanf("%d",&n);
    printf("donner la valeur du reel x:");
    scanf("%d",&x);
    
    for (int i=0;i<=n;i++)
    {
        s  = (pow(-1,n))*(pow(x,2*n)+1)/(2*n+1 );
        some=some+s;
    }
    printf("%.2f",s);
}