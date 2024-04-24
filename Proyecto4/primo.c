#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int pedir_entero(char name)
{
    int x;
    printf("Valor para entero para almacenar %c \n",(name));
    scanf("%d", &x);
    return x; 

}

bool es_primo (int N){

    bool primo=true; 
    if (N == 0){
        primo = false;
    }

    int i = 2;
    while ( N > i)
    {
        if (N % i == 0)
        {
            primo = false;
        }

        i = i + 1; 
    }
    

    return(primo);
}

int nesimo_primo(int N)
{
    int c, i;
    c = 0;
    i = 2;
    while (N > c)
    {
        if (es_primo(i))
        {
            c = c + 1;
        }
        i = i + 1;
    }
    
    return(i - 1);
}

int main (void)
{
    int n;
    n = pedir_entero('n');
    printf("El %d-nesimo primo es %d\n",n,nesimo_primo(n));
    return (0);
}
/*
Valor para entero para almacenar n
4
El 4-nesimo primo es 7
*/
