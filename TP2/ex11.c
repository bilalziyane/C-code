#include<stdio.h>
int main ()
{
    int n ;
    printf("donnez la note de l'eleve ");
    scanf("%d",&n);
    if  (n>=10 && n<12 )
    {
      printf("la mention de l'etudiant est passable ");
    }  
    else if (n>=12 &&  n<14 )
    {
       printf("la mention de l'etudiant est assez bien");
    }   
    else if ( n>=14 && n<14)
    {
        printf("bien");
    }
    else if (n>=16)
    {
        printf("tres bien ");
    }
    return 0;
}

