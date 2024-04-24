#include <stdio.h>
#include <assert.h>

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

struct comp_t 
{
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos(int tam, int a[], int elem)
{
    struct comp_t d;
    int i;
    i=0;
    d.iguales=0;
    d.menores=0;
    d.mayores=0;
    while (tam > i)
    {
        if (a[i] == elem)
        {
            d.iguales = d.iguales + 1;
        } else if (a[i] != elem){
            d.iguales = d.iguales;
        }
        
        if (a[i] > elem)
        {
            d.mayores = d.mayores + 1;
        }else if (a[i] < elem){
            d.menores = d.menores +1;
        }
        
        i = i + 1;
    }
    printf("mayores=%d\nmenores=%d\niguales=%d\n",d.mayores, d.menores, d.iguales);
    return (d);
}

int main(void)
{
    int T, E;
    printf("dame elmento de comparacion\n");
    E = pedir_entero('E');
    printf("dame tamaño de lista\n");
    T = pedir_entero('T');
    assert(T > 0);
    int a[T];
    pedir_arreglo(T, a);
    cuantos(T, a, E);
}
/*
dame elmento de comparacion
Valor para entero para almacenar E
6
dame tamaño de lista
Valor para entero para almacenar T
5
dame valor para posicion 0
0
dame valor para posicion 1
6
dame valor para posicion 2
4
dame valor para posicion 3
129
dame valor para posicion 4
888
mayores=2
menores=2
iguales=1
*/