#include <stdio.h>
#include <assert.h>
#include <limits.h>

int pedir_entero(char name)
{
    int x;
    printf("Valor para entero para almacenar %c \n",(name));
    scanf("%d", &x);
    return x; 

}

void pedir_arreglo(int n_max, float a[])
{
    int i;
    i = 0;
    while (n_max > i)
    {
        printf("dame valor para posicion %d\n",i);
        scanf("%e", &a[i]);
        i = i + 1;
    }
    
}

struct datos_t 
{
    float maximo;
    float minimo;
    float promedio;

};

struct datos_t stats(int tam, float a[])
{
    struct datos_t d;
    int i;
    i = 0;
    d.promedio = 0;
    d.minimo = INT_MAX;
    d.maximo = INT_MIN;
    while (tam > i)
    {
        if (a[i] < d.minimo)
        {
            d.minimo= a[i];
        }else if (a[i] > d.minimo){
            d.minimo= d.minimo; 
        }
        
        if (a[i] > d.maximo)
        {
            d.maximo = a[i];
        }else if (a[i] < d.maximo){
            d.maximo = d.maximo;
        }

        d.promedio = a[i] + d.promedio;

        i = i + 1;
    }
    
    d.promedio = d.promedio / tam;

    printf("maximo=%f\nminimo=%f\npromedio=%f\n",d.maximo, d.minimo, d.promedio);
    
    return(d);

}

int main(void)
{
    int T;
    printf("Tamaño array\n");
    T = pedir_entero('T');
    float a[T];
    assert(T > 0);
    pedir_arreglo(T, a);
    stats(T, a);
    
}
/*
Tama├▒o array
Valor para entero para almacenar T
4
dame valor para posicion 0
9
dame valor para posicion 1
7
dame valor para posicion 2
1234
dame valor para posicion 3
6
maximo=1234.000000
minimo=6.000000
promedio=314.000000
*/