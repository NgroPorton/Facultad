#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "array_helpers.h"

unsigned int array_from_file(int array[],unsigned int max_size, const char *filepath) {
    FILE *fl;
    fl = fopen( filepath, "r");
    
    unsigned int tam;
    
    fscanf(fl,"%u",&tam);
    assert(tam < max_size);
    
    for (unsigned int i=0;i<tam;i++){
        fscanf(fl,"%d", &array[i]);
    }

    fclose(fl);

    return tam;
}

void array_dump(int a[], unsigned int length) {
    
    printf("[");
    for (unsigned int i=0;i < (length - 1);i++){
        printf(" %d,",a[i]);
    }
    printf(" %d",a[length - 1]);
    printf("]\n");
}

 mybool array_is_sorted(int a[], unsigned int length){
    mybool c=true;

    for (unsigned int i = 0; i < length - 1; i++)
    {
        if (a[i] > a[i + 1] && (c==true))
        {
            c=false;
        }
    }
    return c;   
}
