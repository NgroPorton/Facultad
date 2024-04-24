#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
bool todos_pares(int tam, int a[])
{
    int i;
    bool valor;
    i = 0;
    valor = 1;
    while (tam > i)
    {
        int o;
        
        o = a[i];

        if ( o % 2 == 0)
        {
            valor = valor;
        } else if ( o % 2 != 0 ) {
            valor = 0;
        }
        
        i = i + 1;
    }
    
    if (valor == 1)
    {
        printf("True\n");
    } else if (valor != 1) {
        printf("False\n");
    }
    
    return(i);
}

bool existe_multiplo(int m, int tam, int a[])
{
    int i;
    bool o;
    i = 0;
    o = 0;
    while (tam > i)
    {
        if ( a[i] % m == 0)
        {
            o = 1;
        } else if (a[i] % m != 0){
            o = o;
        }
        
        i = i + 1;
    }
    if (o == 1)
    {
        printf("True\n");
    } else if(o != 1){
        printf("False\n");
    }
    
    return (o);
}


int main (void)
{
    int T;
    printf("Tamaño arreglo\n");
    scanf("%d", &T);
    int a[T];
    int i;
    i=0;
    while (T > i)
    {
        printf("valor para pos %d\n", i);
        scanf("%d", &a[i]);
        i = i + 1;

    }  
    
    int cod;
    
    printf ("Que querés hacer?\n1.Todos_pares\n2.Existe_multiplo\n");
    scanf ("%d", &cod);
    assert(cod == 1 || cod == 2);
    if (cod == 1)
    {
        todos_pares (T, a);

    } else if (cod != 1){
        
        int m;
        printf("existe multiplo de ...\n");
        scanf("%d", &m);
        
        existe_multiplo(  m, T, a);
    }
    

    return(0);
}
/*
Tama├▒o arreglo
5
valor para pos 0
99
valor para pos 1
12
valor para pos 2
4
valor para pos 3
8
valor para pos 4
1
Que quer├®s hacer?
1.Todos_pares
2.Existe_multiplo
1
False
*/