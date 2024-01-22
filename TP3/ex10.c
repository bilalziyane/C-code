#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float x=0 ;
    printf("donner votre nombre :");
    scanf("%d",&n);
    for (int i=1 ;i<=n ; i++)
    {
       x = x + (float)1/i;
    }
    printf("%.2f",x);
}