#include <stdio.h>

int main()
{
    int list [201];
    int i;
    int suma=0;
    
    
    for(i=1; i<201; i++)
    { 
        if(i%2==0)
        {
            suma= suma+ i; 
        }   
    }
    
    printf("La suma de los 100 primeros numeros pares es: %d\n", suma);
    
    return 0; 
} 
