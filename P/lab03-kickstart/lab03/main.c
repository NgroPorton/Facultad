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


unsigned int data_from_file(const char *path,unsigned int indexes[],char letters[],unsigned int max_size){
    unsigned int count;
    FILE *file=fopen(path,"r");
    
    count = 0;

    while ((!feof(file)) && count < max_size)
    {
        fscanf(file, "%u -> *%c*\n",&indexes[count],&letters[count]);
        count++;
    }
    
    fclose(file);
    return count;
}

int main(int a, char *b[]) {
    if (a!=2){return EXIT_FAILURE;}
    unsigned int indexes[MAX_SIZE];
    char letters[MAX_SIZE];
    //char sorted[MAX_SIZE];
    unsigned int length=0; 

    length = data_from_file(b[1],indexes,letters,MAX_SIZE);

    dump(letters, length);

    return EXIT_SUCCESS;
}

