
#include <stdio.h>
#include <math.h>

int main()
{
   int a;
   float des;
   float total;
   
   printf("dame una cantidad:");
   scanf("%d", &a);
   
   if(a>2500)
   {
      des= a*0.08;
      total= a-des;
      
      printf("la cantidad total será: %f\n", total);
   }
   
   else 
   
   {
      printf("la cantidad total será: %d\n", a);
   }
   return 0;
   
}
