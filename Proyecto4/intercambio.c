#include <stdio.h>
#include <assert.h>

int pedir_entero(char name)
{
    int n;
    printf("ingresar valor para %c \n", name);
    scanf("%d", &n);
    return (n);

}

int main(void)
{
    int x, y, z;
    x = pedir_entero('x');
    y = pedir_entero('y');
    z = x;
    x = y;
    y = z;
    printf("el valor de x = %d\nel valor de y = %d\n",x, y);
    return(0);  
}
/*
ingresar valor para x
3
ingresar valor para y
5
el valor de x = 5
el valor de y = 3
*/