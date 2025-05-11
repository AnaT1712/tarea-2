#include <stdio.h>
#include <math.h>

int main()
{
   int a;
   float aument;
   float total;
   
   printf("dame una cantidad:");
   scanf("%d", &a);
   
   if(a<1000)
   {
      aument= a*0.15;
      total= a+aument;
      
      printf("el sueldo total será: %f\n", total);
   }
   
   else 
   
   {
      aument= a*0.12;
      total= a+aument; 
      printf("el sueldo total será: %f\n", total);
   }
   return 0;
   
}
