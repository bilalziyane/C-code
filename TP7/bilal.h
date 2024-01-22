
int min (int a,int b){
   int min ;
   min =a;
   if (b<a){
      min=b;
   }
   return min ;
}
int max (int a,int b){
   int max ;
   max =a;
   if (b>a){
      max =b;
   }
   return max ;
}
void parite (int a){
   if (a%2==0){
      printf("pair ");
   }else printf("impair ");
}
int absolu(int a){
   int ab=a;
   if (a<0){
      ab =a*-1;
   }
   return ab ;
}
float puissance (float x,int n){
   int i;
   float p=1;
   for (i=0;i<n;i++){
      p=p*x;
   }
   return p;
}
int fact(int n){
   int p=1;
   for (int i=1;i<=n;i++){
      p=p*i;
   }
   return p;
}
float fonc(float x, int n)
{
    float sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += puissance(x, i) / fact(i);
    }
    return sum;
}
void lire_tab(int tab[],int n){
   for (int i=0;i<n;i++){
      printf("tab[%d]=",i);
      scanf("%d",&tab[i]);
   }
}
void ecrire_tab(int  tab[],int n){
   for (int i=0;i<n;i++){
      printf("tab[%d]=%d\n",i,tab[i]);
   }
}
int somme_tab(int B[],int n){
   int p=0;
   for(int i=0;i<n;i++){
      p=p+B[i];
   }
   return p;
}
int strlen_bilal(char T[]){
   int i,j=0;
   for (i=0;T[i]!='\0';i++)
       j++;
   return j;
}
int apparition (char T[],char a){
int i,j=0;
   for (i=0;T[i]!='\0';i++){
      if (T[i]==a)
        j++;
   }
   return j;}
void  ajoute_ch(char ch2[],char ch1[]){
   char ch[100];
    int i,j=0,k,f;
    for(i=0;ch1[i]!='\0';i++){
      ch[i]=ch1[i];
      j++;
    }
    ch[j]=' ';
    for(k=j+1,f=0;ch2[f]!='\0';f++,k++){
       ch[k]=ch2[f];
    }
    puts(ch);
}
void inverse_ch(char ch[]){
   int i,l;
   char temp;
   l=strlen_bilal(ch);
   for (i = 0; i<l/2; i++) {
        temp= ch[i];
        ch[i] = ch[l-i-1];
        ch[l-i-1] = temp;
    }
    puts(ch);
   }