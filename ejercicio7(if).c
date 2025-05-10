#include <stdio.h>
#include <math.h>

int main()
{
   int dias;
   int distancia;
   float des;
   float precio;
   float total;
   
   printf("Días de estancia:");
   scanf("%d", &dias);
   printf("Distancia total:");
   scanf("%d", &distancia);
   
   if(dias>7 && distancia>800)
   {
      precio= distancia*0.23;
      des= precio*0.30;
      total= precio-des;
      
      printf("el precio total será: %f\n", total);
   }
   
   else 
   
   {
      total=distancia*0.23; 
      printf("el precio total será: %f\n", total);
   }
   return 0;
   
}
