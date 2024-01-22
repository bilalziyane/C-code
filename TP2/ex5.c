#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("entrez votre premier  nombre ");   
    scanf("%d",&a);    
    printf("entrez votre deuxieme  nombre ");
    scanf("%d",&b);
    printf("entrez votre troisieme  nombre ");
    scanf("%d",&c);
    if (a>b && a>c && b>c)
    {
        printf("the max is : %d \n",a);
        printf("the min is :%d",c);
    }
        else if (a>b && a>c && c>b)
         {
           printf("the max is : %d \n",a);
           printf("the min is :%d \n",b);
         }
    
    else if (b>a && b>c && c>a)
    {
        printf("the max is : %d\n",b);
         printf("the min is :%d\n",a);
         }
        else if (b>a && b>c && a>c)
        {
              printf("the max is : %d\n",b);
              printf("the min is :%d\n",c);

        }
    
    else if (c>a && c>b && a>b)
    {
        printf (" the max is :%d\n",c);
         printf("the min is :%d\n",b);
    }
         else if (c>a && c>b && b>a)
         {
            printf (" the max is :%d\n",c);
            printf("the min is :%d\n",a);
            
         }
    
    return 0;

}
