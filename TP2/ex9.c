#include<stdio.h>
int main ()
{
    int n,a ;
    printf("donner le jour de la semaine ");
    scanf("%d",&n);
    switch (n)
    {
       case 1:
       case 2:
       case 3:
       case 4:
       case 5:
              printf("il y a cours ");
              break;
       case 6:
             printf ("il y a devoirs surveille ");
        break;
       case 7 :
             printf("on se repose ");
            break;   
    default: 
        printf("error");
        break;
    }
    return 0;
}
