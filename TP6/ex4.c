#include <stdio.h>
float Puissance(float x,int n){
    float output=1;
    for(int i=0;i<n;i++){
    output=output*x; 
    }
    return output;
}
int Fact(int a){
   int fac=1;
   for(int i=a;i>0;i--){
    fac=fac*i;
   } return fac;
}
float Fonc(float x, int n)
{
    float sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += Puissance(x, i) / Fact(i);
    }
    return sum;
}
int main(void){
    float x; int n;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    float sum = Fonc(x,n);
    printf("The sum equals to %.2f",sum);
}