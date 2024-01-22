#include<stdio.h>
int main ()
{
    int a;
    printf("entrez votre nombre:\n");
    scanf("%d",&a);
    for (int i=0;i<=a+1;i++)
    {
        printf("%dx%d=%d\n",a,i,a*i);
    }
}