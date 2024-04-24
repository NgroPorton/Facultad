#include <stdio.h>
#include <stdbool.h>
char pedir_caracter(void)
{
    char letra;
    printf("Ingresar Caracter\n");
    scanf("%c", &letra);
    return(letra);
}

bool es_vocal(char letra)
{
    bool x;
    if (letra == 'a'|| letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'|| letra == 'A'|| letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        x = true;
    } else{
        x= false;
    }
    
    if (x == true)
    {
        printf("True\n");
    }else{
        printf("False\n");
    }
    
    return(0);
}

int main(void){
    
    char Fst;
    Fst = pedir_caracter();
    es_vocal(Fst);
    return(0);
}
/*
Ingresar Caracter
r
False
---------------------
Ingresar Caracter
o
True
*/