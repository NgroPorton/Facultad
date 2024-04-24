#include <stdio.h>
#include <assert.h>
int pedir_entero(char name)
{
    int n;
    printf("ingresar valor para %c \n", name);
    scanf("%d", &n);
    return (n);

}

int main (void){
    int Fst, Snd, Trd, x, y, z;

    x = pedir_entero('x');
    y = pedir_entero('y');
    z = pedir_entero('z');
    Fst = x;
    Snd = y;
    Trd = z;
    assert((Fst==x)&&(Snd== y)&&(Trd==z));
    x = Snd;
    y = Fst + Snd + Trd;
    z = Fst + Snd;
    printf("valores finales\nx = %d\ny = %d\nz = %d\n", x, y, z);
    return (0);
    
}
/*
ingresar valor para x
5
ingresar valor para y
6
ingresar valor para z
1
valores finales
x = 6
y = 12
z = 11
*/