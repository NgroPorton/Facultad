#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 1000

static void dump(char a[], unsigned int length) {
    printf("\"");
    for (unsigned int j=0u; j < length; j++) {
        printf("%c", a[j]);
    }
    printf("\"");
    printf("\n\n");

}

void s(char letters[],char sorted[],unsigned int length){
    char aux;
    for (unsigned int i = 0; i < length; i++)
    {
        aux=letters[i];
        letters[i]=sorted[i];
        sorted[i]=aux;

    }
}

unsigned int data_from_file(const char *path,unsigned int indexes[],char letters[],unsigned int max_size){
    unsigned int count;
    FILE *file=fopen(path,"r");
    
    char l;
    count = 0;

    while ((!feof(file)) && count < max_size)
    {
        fscanf(file, "%u -> *%c*\n",&indexes[count],&l);
        
        if (indexes[count] < max_size)
        {
            letters[indexes[count]]=l;
        }else{
            printf("Entero prohibido\n");
            return EXIT_FAILURE;}
        
        count++;
    }
    
    fclose(file);
    return count;
}

int main(int a, char *b[]) {
    if (a!=2){return EXIT_FAILURE;}
    
    unsigned int indexes[MAX_SIZE];
    char letters[MAX_SIZE];
    char sorted[MAX_SIZE];
    unsigned int length=0; 

    length = data_from_file(b[1],indexes,letters,MAX_SIZE);

    s(letters, sorted, length);

    dump(sorted, length);

    return EXIT_SUCCESS;
}

