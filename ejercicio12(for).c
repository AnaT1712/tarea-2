#include <stdio.h>

int main()
{
    int n;
    int i;
    int prod=1;
    
    printf("dame un número:");
    scanf("%d", &n);
    
    for(i=1; i<=n ;i++)
    {
        if (i%2==0)
        {
            prod=prod*i;
        }
    }
    
    printf("el producto de los números pares es: %d\n", prod);
    
    return 0;
}
