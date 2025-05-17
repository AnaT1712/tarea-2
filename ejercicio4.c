#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    float tasa;
    float total;
    
    printf("dame una cantidad de dinero:");
    scanf("%d", &a);
    
    tasa= a*0.06;
    total= a+ tasa;
    
    printf("la cantidad total de dinero será: %f\n", total);
    return 0;

}
