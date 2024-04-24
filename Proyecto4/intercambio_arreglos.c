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

void intercambiar(int tam, int a[], int i, int j){
    int z, l;
    l = 0;
    z = a[i];
    a[i] = a[j];
    a[j] = z;

    while (tam > l)
    {
        printf("%d. == %d\n", l , a[l]);
        l = l + 1;
    }
}

int main (void)
{
    int T, x, y;
    printf("Tamaño arreglo\n");
    T = pedir_entero('T');
    int a[T];
    pedir_arreglo(T, a);
    printf("Dame posiciones para intercambiar\n");
    printf("1ra\n");
    x = pedir_entero('1');
    printf ("2da\n");
    y = pedir_entero('2');
    assert(x < T && y < T && y != x);
    intercambiar(T, a, x, y);
    return(0);
}

/*
Tama├▒o arreglo
Valor para entero para almacenar T
5
dame valor para posicion 0
12
dame valor para posicion 1
33
dame valor para posicion 2
44
dame valor para posicion 3
55
dame valor para posicion 4
66
Dame posiciones para intercambiar
1ra
Valor para entero para almacenar 1
0
2da
Valor para entero para almacenar 2
3
0. == 55
1. == 33
2. == 44
3. == 12
4. == 66
*/