#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>



char SN (void){
    
    char m;
    printf("S/N\n");
    scanf("%c",&m);
    return m;

}
    

bool verificación (int a, char name){
    bool b, ver;
    ver= false;
    char k='o';
    printf("el entero introducido fue = %d \nEn el valor = %c \n",a,name);
    printf("Estas seguro\n");
    
    while (ver == false)
    {
        k = SN();

        if (k=='s')
    {
        b = true;
        ver = true;
    }
    if (k=='n')
    {
        b = false;
        ver =true;
    }
    if ((k/='n') || (k/='s'))
    {
        ver = ver;
    }

    }
    
    return b;

}

int pedir_entero(char name){
    int x;
    printf("dame un entero para el valor %c \n",name);
    scanf("%d",&x);

    return x;
}

int main (void){
    int x;
    bool ver;
    ver = false;
    // ver si sigue
     
    while (ver == false)
    {
        x = pedir_entero('x');
        
        if (verificación(x,'x')== false)
        {
            x=x;
        }else if (verificación(x,'x')== true)
        {
            ver=true;
        }
        
        
    }
    
    
    
    printf("==========  \n"); 
    printf("este es final %d \n",x);
    printf("==========  \n");

    return (0);

}