#include <stdio.h>
int main() {
   int a,b,c;
   scanf("%d", &a);
   b=a;
   c=a;
   while(a<1000000){
      b*=c;
      if(b>=1000000)
         break;
      a+=b;
   }
   printf("%d", a);
   return 0;
}