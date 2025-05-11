#include <stdio.h>
#include <math.h>

int main()
{
   int a;
   float aumen1;
   float aument2;
   float total;
   
   printf("dame una cantidad:");
   scanf("%d", &a);
   
   if(a<1000)
   {
      aumen1= a*0.15;
      total= a+aumen1;
      
      printf("el sueldo total será: %f\n", total);
   }
   
   else 
   
   {
      aument2= a*0.12;
      total= a+aument2; 
      printf("el sueldo total será: %f\n", total);
   }
   return 0;
   
}
