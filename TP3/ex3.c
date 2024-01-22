#include<stdio.h>
int main()
{
    int a,b,mul=0;
    printf("entrez votre deux nombre:\n");
    scanf("%d%d",&a,&b);
    for ( int i=0;i<b ; i++ )
    {
         mul=mul+a;
    }
    printf("%d",mul);
}