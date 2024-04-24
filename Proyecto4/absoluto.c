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
    int x;
    x = pedir_entero ('x');
    
    if (x <= 0){
        assert(x <= 0);
        x = x *(-1);
        printf("%d\n", x);
    } else if(x>0){
        assert(x>0);
        x = x;
        printf("%d\n", x);
    }
    return(0);
    
}
/*
ingresar valor para x
-4
4
*/