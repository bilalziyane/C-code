#include <stdio.h>
int main()
{
    int n,i,j,some;
    printf("entrez votre nombre :");
    scanf("%d",&n);
    some=0;
    for (i=1; i<n ; i++)
    {
      for (j=1; j<i; j++);
      {
        if ((i%j)==0)
        {
            some=some+j;
        }
      }
      if (i==some)
        {
            printf("%d\n",i);
        }
        some=0;
    }
}
 