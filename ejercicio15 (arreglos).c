#include <stdio.h>

int main()
{
    int list [5];
    int i;
    int pos=0;
    int neg=0;
    int nul=0;
    
    for(i=0; i<5; i++)
    { 
      printf("dame un numero:");
      scanf("%d", &list[i]);
    }
    
    for(i=0; i<5; i++)
    {
        if (list[i]==0)
        {
            nul=nul + 1;
        }
        else
        {
            if (list[i]<0)
            {
                neg=neg + 1;
            }
            else
            {
                pos=pos + 1;
            }
        }
        
    }
    
    printf("la cantidad de numeros positivos es: %d\n", pos);
    printf("la cantidad de numeros negativos es: %d\n", neg);
    printf("la cantidad de numeros nulos es: %d\n", nul);
    
    return 0;
    
} 
