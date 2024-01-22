#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,u=1,v=1,w,N;
printf("Tapez N : ");
scanf("%d",&N);
w=1;
for(i=2;i<=N;i++)
        {
        w=u+v;
        u=v;
        v=w;
        }
printf("u(%d)=%d",N,w);
printf("\n");
system("pause");
return 0;
}