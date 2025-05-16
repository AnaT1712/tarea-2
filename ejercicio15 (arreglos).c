#include <stdio.h>

int main()
{
    int list [5];
    int i;
    int pos=0;
    int neg=0;
    int nul=0;
    int contnul=0;
    int contneg=0;
    int contpos=0;
    
    for(i=0; i<5; i++)
    { 
      printf("dame un numero:");
      scanf("%d", &list[i]);
    }
    
    for(i=0; i<5; i++)
    { 
        if(list[i]==0)
        {
            contnul= contnul+list[i];
            contnul++;
        }
        else
        {
            if(list[i]<0)
            {
              contneg= contneg + list[i];
              contneg++;
            }
            else 
            {
                contpos= contpos + list[i];
                contpos++;
            }
        }
    }
    
    printf("La cantidad de numeros positivos es: %d\n", pos);
    printf("la cantidad de numeros nulos es: %d\n",nul);
    printf("la cantidad de numeros negativos es: %d\n", neg);
    
    return 0; 
} 
