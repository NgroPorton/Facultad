#include <stdio.h>   
#include <stdbool.h>  
#include <stdlib.h>   

int main(void) {
    bool b1, b2;
    b1 = true;
    b2 = false;
    printf("b1: %d\n", b1);
    printf("b2: %d\n", b2);
    printf("b1 || b2: %d\n", b1 || b2);
    printf("b1 && b2: %d\n", b1 && b2);

    return EXIT_SUCCESS;
}
