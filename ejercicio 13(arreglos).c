
#include <stdio.h>
int main()

{
    int list [10];
    int i;
    int suma=0;
    
    for (i=0; i<10; i++) 
    {
        printf("dame un numero:");
        scanf("%d", &list[i]);
    }
    
    for(i=0; i<10; i++)
    { 
        suma= suma +list[i];
    }
    
    printf(" el resultado de la suma de los numeros es %d\n", suma);
    return 0;
}
