#include<stdio.h>
int main ()
{
    int n,i,k;
    printf("donner votre nombre :");
    scanf("%d",&n);
    if (n==0&& n==1)
    {
        k=1;
    }
    for (i=2;i<n;i++){
       k=(n-1)+(n-2);
        if (i==k)
        {
            printf("%d",k);
        }
    }
    printf("%d",k);
}
    