#include <stdio.h>

int main()
{
   int a;
   int b;
   
   printf("dame un número:");
   scanf("%d", &a);
   printf("dame otro número:");
   scanf("%d", &b);
   
   
   if(a % b == 0)
   {
      
      printf("a es divisor de b");
   }
   
   else 
   
   {
      printf("a no es divisor de b");
   }
   return 0;
   
}
