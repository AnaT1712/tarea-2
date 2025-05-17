#include <stdio.h>

int main()
{
    int list [5];
    int i;
    int suma=0;
    int a;
    
    for (i=0; i<5; i++) 
    {
        printf("dame un numero:");
        scanf("%d", &list[i]);
    }
    
    printf("Dame un número dentro de la lista:");
    scanf("%d", &a);
    
    for(i=0; i<5; i++)
    { 
        if(list[i]==a)
        {
            suma=suma + 1;
        }
    }
    
    printf("la cantidad de veces que sale el número es: %d\n", suma);
    return 0;
} 
