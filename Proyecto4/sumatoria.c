#include <stdio.h>

int sumatoria(int tam, int a[])
{
    int i, f;
    i = 0;
    f = 0;
    while (tam > i)
    {
        f = f + a[i];
        i = i + 1;
    }
    printf("resultado final %d\n",f);
    
    return(0);
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
    
    sumatoria(T , a);

    return(0);
}
/*
Tama├▒o arreglo
2
valor para pos 0
-50
valor para pos 1
50
resultado final 0
*/