#include <stdio.h>
#include <math.h>


int main()
{
    float dolares;
    float pesos;
    
    printf("dame una cantidad en dólares:");
    scanf("%f", &dolares);
    
    pesos=  dolares*11.96;
    
    printf("la suma de los números es: %f\n", pesos);
    
    return 0;
}
