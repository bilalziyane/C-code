#include <stdio.h>
int main ()
{
   
    int t[100] , i ,j,dim ;
    printf ("x=");
    scanf("%d",&dim);
    for (i=0;i<dim;i++)
   {t[i]=1;}
    for (i=2 ; i<=dim ; i++)
            if(t[i] != 0)
                for (j=i+i ; j<=dim ; j+=i)
                    t[j] = 0;
            for (i=1 ; i<=dim ; i++)
                if (t[i] != 0)
                printf("%d\n" , i) ;

    

}