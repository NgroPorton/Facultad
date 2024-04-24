#include <stdio.h>
#include <assert.h>

int pedir_entero(void)
{
    int n;
    printf("ingresar valor\n");
    scanf("%d", &n);
    return (n);

}


void hola_hasta(int n)
{
    assert(n > 0);
    while(n != 0){
        printf("Hola\n");
        n = n - 1; 
    }
}

int main (void)
{
    hola_hasta(pedir_entero());
    return(0);
}
/*
ingresar valor
33
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
Hola
*/
