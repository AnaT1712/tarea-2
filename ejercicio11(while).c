#include <stdio.h>

int main()
{
    int i=10;
    int p=0;
    
    while(i<51)
    {
        if(i % 2==0)
        {
            p=p+i;
        }
        
        i=i + 1;
    }
    
    printf("la suma de números pares entre 10 y 50 es: %d\n", p);
    
    return 0;
}
