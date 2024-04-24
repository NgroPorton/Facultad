#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

char pedir_caracter(void)
{
    char letra;
    printf("Ingresar Clave para buscar en el array\n");
    scanf("%c", &letra);
    return(letra);
}

int pedir_entero(char name)
{
    int x;
    printf("Valor para entero para almacenar %c \n",(name));
    scanf("%d", &x);
    return x; 

}

struct asoc {
clave_t clave;
valor_t valor;
};

bool asoc_existe(int tam, struct asoc a[], clave_t c)
{
    int i = 0;
    bool existe = false;
    while (tam > i && !(existe))
    {
        if( a[i].clave == c)
        {
            existe = existe || (a[i].clave == c);
        }
        i = i + 1;
    }
    
    return(existe);
}

void pedir_arreglo(int n_max, struct asoc a[])
{
    int i;
    i = 0;
    while (n_max > i)
    {
        printf("\nDame valor para posicion %d\n",i);
        scanf("%d", &a[i].valor);
        printf("Dame clave para posicion %d\n",i);
        scanf(" %c", &a[i].clave);
        
        i = i + 1;
    }
    
}

int main(void)
{
    clave_t x;
    x = pedir_caracter();
    int T;
    printf("Tamaño de array\n");
    T = pedir_entero('T');
    assert(T > 0);
    struct asoc a[T];
    pedir_arreglo(T, a);

    if (asoc_existe(T,a,x)== 0)
    {
        printf("No existe\n");
    }else if(asoc_existe(T,a,x)== 1) {
        printf("Existe\n");
    }
    

    return(0);
}   
/*
Ingresar Clave para buscar en el array
ñ
Tama├▒o de array
Valor para entero para almacenar T
4

Dame valor para posicion 0
1
Dame clave para posicion 0
p

Dame valor para posicion 1
7
Dame clave para posicion 1
o

Dame valor para posicion 2
1
Dame clave para posicion 2
z

Dame valor para posicion 3
3
Dame clave para posicion 3
c
No existe
*/