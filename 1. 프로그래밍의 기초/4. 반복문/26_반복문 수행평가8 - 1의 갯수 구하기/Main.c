#include <stdio.h>
int main() {
   int a,c=0;
   scanf("%d", &a);
   while(a!=0){
   if(a%10 == 1)
      c++;
   if((a/10)%10 == 1)
      c++;
         a--;
   }
   printf("%d", c);
   return 0;
}