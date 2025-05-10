#include <stdio.h>
#include <math.h>


int main()
{
    float a;
    float área;
    float circunf;
    float π=3.1416;
    
    printf("dame el radio del círculo:");
    scanf("%f", &a);
    
    circunf = 2*π*a;
    área= pow(a,2)*π;
    
    printf("la circunferencia será: %f\n", circunf);
    printf("el área será: %f\n", área);
    
    return 0;
}
