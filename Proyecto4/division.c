#include <stdio.h>
#include <assert.h>

struct div_t 
{
    int cociente;
    int resto;  

};

struct div_t division(int x, int y)
{

    struct div_t d;
    
    d.cociente= x / y;
    d.resto= x % y;
    
    return d; 
    

}

int pedir_entero(char name)
{
    int n;
    printf("ingresar valor para %c \n", name);
    scanf("%d", &n);
    return (n);

}


int main (void)
{
    int a, b;
    struct div_t d;
    
    a=pedir_entero('x');
    b=pedir_entero('y');
    
    assert(a >= 0);
    assert(b > 0);
    
    d = division(a,b);
    printf("%d = %d * %d + %d\n",a,b,d.cociente,d.resto);
    
    return(0);
}
/*
ingresar valor para x
6
ingresar valor para y
3
6 = 3 * 2 + 0
*/