#include <stdio.h>
int main()
{
    int x,y,z,a;
    printf("entrez la valeur de x:\n"); 
    scanf("%d",&x);
    printf("entrez la valeur de y:\n");
    scanf("%d",&y);
    printf("entrez la valeur de z:\n");
    scanf("%d",&z);
    a=z;
    z=y;
    y=x;
    x=a;
    printf("la nouvelle valeur de x est :%d \n",x);
    printf("la nouvelle valeur de y est :%d \n",y);
    printf("la nouvelle valeur de z est :%d \n",z);
    return 0;
}