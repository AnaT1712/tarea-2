#include <stdio.h>

int main()
{
    int a;
    int b;
    int suma;
    int resta;
    int mult;
    
    printf("dame un número:");
    scanf("%d", &a);
    printf("dame otro número:");
    scanf("%d", &b);
    
    suma=a+b;
    resta=a-b;
    mult= a*b;
    
    printf("la suma de los números es: %d\n", suma);
    printf("la resta de los números es: %d\n", resta);
    printf("la multiplicación de los números es: %d\n", mult);
    
    return 0;
}
