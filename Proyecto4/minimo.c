#include <stdio.h>
#include <assert.h>

int pedir_entero(char name)
{
    int n;
    printf("ingresar valor para %c \n", name);
    scanf("%d", &n);
    return (n);

}


int main (void)
{ 
    int x, y;
    x = pedir_entero ('x');
    y = pedir_entero ('y');
    
        if (x <= y){
        printf("el minimo es %d \n",x);
    } else if (x > y){
        printf ("el minimo es %d \n",y);
    }
        

    return (0);
}
/*
ingresar valor para x
5
ingresar valor para y
120
el minimo es 5
*/