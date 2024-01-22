#include <stdio.h>
int main ()
{
    int a,b,c,min,max;
    printf("entrer votre premier  nombre :");
    scanf("%d",&a);
    printf("entrer votre deuxieme nombre :");
    scanf("%d",&b);
    printf("entrer voter troisieme  nombre :");
    scanf("%d",&c);
    if (b<a)
     {
        min = b;
        max = a;
     }
    else 
     {
        max =b;
        min=a;
     }
     if (max<c)
     max =c;
    if (min >c)
        min=c;
    printf("the maximun is :%d\n",max);
    printf("the minimum is :%d",min );
    return 0;
}