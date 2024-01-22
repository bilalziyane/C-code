#include <stdio.h>
#include <math.h>
int main ()
{
    float d;
    int xa, ya,xb ,yb ;
    printf("entrez xa :");
    scanf("%d",&xa);    
    printf("entrez ya :");
    scanf("%d",&ya);
    printf("entrez xb :");
    scanf("%d",&xb);
    printf("entrez yb:");
    scanf("%d",&yb);
    d= (sqrt(pow(xa-xb,2)+pow(ya-yb,2)));
    printf("the distance between the two point is :%.2f", d);
    return 0;
} 
