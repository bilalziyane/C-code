#include <stdio.h>
int main (){
   int *pa,*pb,i,n,m,A[50],B[50];
   printf("donner dimension de votre tableau :");
   scanf("%d",&n);
   printf("donner la dimension de votre deuxieme tableau:");
   scanf("%d",&m);
   for(pa=A;pa<A+n;pa++){
      printf("A[%d]=",pa-A);
      scanf("%d",pa);
   }
   for(pb=B;pb<B+m;pb++){
      printf("B[%d]=",pb-B);
      scanf("%d",pb);
   }
   for(pa=A;pa<A+n;pa++){
      printf("A[%d]=%d\n",pa-A,*pa);
   }
   for(pb=B;pb<B+m;pb++){
      printf("B[%d]=%d\n",pb-B,*pb);
         }
   for(pa=A+n,pb=B;pa<A+n+m;pa++){
      *pa=*pb;
      pb++;
   }
   for (pa=A;pa<A+m+n;pa++){
      printf("%d ",*pa);
   }
}
   

