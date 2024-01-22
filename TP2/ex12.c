#include<stdio.h>
int main ()
{
    int p ;
    float t , pi , bim , ta;
    char s;
    printf("donner le sexe de la personne M/F :");
    scanf("%c",&s);
    printf("donner taille de la personne en cm :\n");
    scanf("%f",&t);
    printf("donner le poids de la personne en kg: \n");
    scanf("%d",&p);
    switch (s)
    {
     case 'm':
       pi =(t-100)-(t-150)/4;
       printf("le poids ideal est :%.2f\n",pi);
       break;
     case 'f':
      pi = (t-100)-(t-150)/2;
      printf("le poids ideal est :%.2f\n",pi);
      break;
     default :
       printf("error\n");break;
    }
    ta = t*0,01 ;
    bim= p/ta*2 ;
    if ( bim < 27 )
    {
        printf("normal\n");
    }
    else if (bim>=27 && bim<32)
    {
        printf("obese\n");
    }
    else printf("malade");
    return 0;
}
