#include <stdio.h>
int main()
{
   float r,a,b;
   char op ;
   printf("donner la valeur de a:");
   scanf("%f",&a);
   printf("donner la valeur de b:");
   scanf("%f",&b);
   printf("choisissez l´operation que vous voulez:/,+,-,x \n");
   scanf("%s",&op);
   if (op=='+')
   {
       r=a+b;
   }

    else if (op=='-')
   {
          r=a-b;
   }
   else if (op=='x')
   {
        r= a*b;
   }
 else if (op =='/')
   {
       if (b!=0)
       r=a/b;
       else printf ("error \n");
   }
   printf("%.2f",r);
   return 0;
}
