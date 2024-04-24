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
    int Fst, Snd, x, y;

    x = pedir_entero('x');
    y = pedir_entero('y');
    Fst = x;
    Snd = y;
    assert((x==Fst)&&(y==Snd));
    x = Fst + 1;
    y = Fst + Snd;
    printf("valores finales\nx = %d\ny = %d\n", x, y);
    return (0);
}
/*
ingresar valor para x
5
ingresar valor para y
6
valores finales
x = 6
y = 11
*/