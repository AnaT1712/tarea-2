#include <stdio.h>

int main()
{
    int a;
    int i=0;
    int pos=0;
    int neg=0;
    int nul=0;
    
    while(i<5)
    {
        printf("dame un número:");
        scanf("%d", &a);
        
        if (a==0)
        {
            nul=nul + 1;
        }
        else
        {
            if (a<0)
            {
                neg=neg + 1;
            }
            else
            {
                pos=pos + 1;
            }
        }
        
        i=i + 1;
        
    }
    
    printf("la cantidad de números positivos es: %d\n", pos);
    printf("la cantidad de números negativos es: %d\n", neg);
    printf("la cantidad de números nulos es: %d\n", nul);
    
    return 0;
}
            {
                pos=pos + 1;
            }
        }
        
        i=i + 1;
        
    }
    while(i<100);
    
    printf("la cantidad de números positivos es: %d\n", pos);
    printf("la cantidad de números negativos es: %d\n", neg);
    printf("la cantidad de números nulos es: %d\n", nul);
    
    return 0;
}
