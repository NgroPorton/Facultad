#include <stdio.h>
#include <assert.h>


int pedir_entero(char name)
{
    int n;
    printf("ingresar valor para %c \n", name);
    scanf("%d", &n);
    return (n);

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

void imprimir_arreglo(int n_max, int a[])
{
    int i;
    i=0;
    while (n_max > i )
    {
        printf("valor de array en la posicion %d = %d\n",i,a[i]);
        i = i + 1;
    }
}

int main (void)
{
    int x;
    printf("dame tamaño de array\n");
    x = pedir_entero('x');
    int a[x];
    pedir_arreglo(x, a);
    imprimir_arreglo(x, a);
    
    return(0);
}
/*
dame tama├▒o de array
ingresar valor para x
5
dame valor para posicion 0
123
dame valor para posicion 1
14298
dame valor para posicion 2
126312673
dame valor para posicion 3
445
dame valor para posicion 4
567
valor de array en la posicion 0 = 123
valor de array en la posicion 1 = 14298
valor de array en la posicion 2 = 126312673
valor de array en la posicion 3 = 445
valor de array en la posicion 4 = 567
*/
