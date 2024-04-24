#include <stdio.h>
#include <assert.h>

int pedir_entero(char name)
{
    int x;
    printf("Valor para entero para almacenar %c \n",(name));
    scanf("%d", &x);
    return x; 

}

int suma_hasta(int n)
{
    int x;
    x = n;
    while ( x != 0)
    {
        n = n + (x - 1);
        x = x - 1;
    }
    printf("valor final %d\n",n);
    return (0);
}

int main(void)
{
    int n;
    printf("Hasta que valor sumar \n");
    n = pedir_entero('n');
    assert(n >= 0);
    suma_hasta(n);
    return(0);
}
/*
Hasta que valor sumar
Valor para entero para almacenar n
4
valor final 10
*/