#include <stdio.h>
#include <assert.h>

int pedir_entero(char name)
{
    int x;
    printf("Valor para entero para almacenar %c \n",(name));
    scanf("%d", &x);
    return x; 

}

void imprimir_entero(int x, char name)
{
    
    printf("el valor %d se almacena en %c \n",x,(name));

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


int prim_iguales(int tam, int a[])
{
    int i, cuenta, aux;
    aux = a[0];
    i=1;
    cuenta=1;
    while (tam > i)
    {
        if (aux==a[i])
        {
            cuenta = cuenta + 1;

        }else if (aux!=a[i])
        {
            i = tam;
        }
        
        i = i + 1;
    } 
    printf("Cantidad de primeros numeros iguales en el array\n");
    imprimir_entero(cuenta, 'c');
    
    //b)
    
    int cuenta1;
    cuenta1=cuenta; 
    int b[cuenta];
    
    while (cuenta >= 0)
    {
        b[cuenta] = aux;
        cuenta = cuenta - 1;

    }
    
    printf("arreglo de elementos que cumplen prim_iguales\n");
    imprimir_arreglo(cuenta1,b);
    
    return (0);
}

int main(void)
{
    
    int T;
    printf("Dame tamaño de lista\n");
    T = pedir_entero('T');
    assert(T > 0);
    int a[T];
    pedir_arreglo(T, a);
    prim_iguales(T, a);
    
    return(0);
}
/*
Dame tama├▒o de lista
Valor para entero para almacenar T
5
dame valor para posicion 0
99
dame valor para posicion 1
99
dame valor para posicion 2
99
dame valor para posicion 3
66
dame valor para posicion 4
66
Cantidad de primeros numeros iguales en el array
el valor 3 se almacena en c
arreglo de elementos que cumplen prim_iguales
valor de array en la posicion 0 = 99
valor de array en la posicion 1 = 99
valor de array en la posicion 2 = 99
*/