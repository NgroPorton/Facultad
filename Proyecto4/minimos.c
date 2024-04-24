#include <stdio.h>
#include <limits.h>

int pedir_entero(char name)
{
    int x;
    printf("Valor para entero para almacenar %c \n",(name));
    scanf("%d", &x);
    return x; 

}

void pedir_arreglo(int n_max, int a[])
{
    int i;
    i = 0;
    while (n_max > i)
    {
        printf("dame valor para posicion %d\n",i);
        scanf("%d", &a[i]);
        i = i + 1;
    }
    
}

int minimo_pares(int tam, int a[])
{
     int i, pio;
     i = 0;
     pio = INT_MAX;
     while (tam > i)
     { 
        if ( a[i] < pio && a[i] % 2 == 0)
        {
            pio = a[i]; 
        } else if (!(a[i] < pio && a[i] % 2 == 0)){
           pio = pio;
        }
                                
      i = i + 1;  
     }
     return (pio);
}

int minimo_impares(int tam, int a[])
{
      int i, poi;
     i = 0;
     poi = INT_MAX;
     while (tam > i)
     { 
        if (a[i] < poi && a[i] % 2 == 1)
        {
            poi = a[i];
        } else if (!(a[i] < poi && a[i] % 2 == 1)){
            poi = poi;
        }

      i = i + 1;  
     }
     return (poi);
}

int main(void)
{
    int po, pi, T;
    printf("dame tamaño\n");
    T = pedir_entero('T');
    int a[T]; 
    
    pedir_arreglo(T,a);

    po = minimo_pares(T, a);
    if (po == INT_MAX)
    {
        printf ("No hay\n");
    }else if (!(po == INT_MAX)){
        printf("minimo de pares=%d\n", po);
    }
    
    pi = minimo_impares(T, a);
    if (pi == INT_MAX)
    {
        printf ("No hay\n");
    }else if (!(pi == INT_MAX)){
        printf("minimo de impares=%d\n", pi);
    }
    
    if (po < pi)
    {
        printf("minimo = %d\n",po);
    }else if (po > pi){
        printf("minimo = %d\n",pi);
    }
    
    return(0);
}
/*
dame tama├▒o
Valor para entero para almacenar T
6
dame valor para posicion 0
124
dame valor para posicion 1
77
dame valor para posicion 2
91
dame valor para posicion 3
7
dame valor para posicion 4
4
dame valor para posicion 5
3
minimo de pares=4
minimo de impares=3
minimo = 3
*/