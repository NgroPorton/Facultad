#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 4

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length) {
    struct bound_data res;
    unsigned int i=0;
    res.exists=false;
    res.is_lowerbound=true;
    res.is_upperbound=true;
    res.where=-1;
    

    while (i<length)
    {
        if (value > arr[i])
        {
            res.is_lowerbound=false;
        }
        if (value < arr[i])
        {
            res.is_upperbound = false;
        }
        if (value == arr[i])
        {
            res.exists = true;
            res.where = i;
        }
        
        i++;
    }
    return res;
}

int pedir_entero()
{
    int x;
    printf("Entero para comparar con elementos de la lista\n");
    scanf("%d", &x);
    return x; 

}

void pedir_arreglo(int n_max, int a[])
{
    int i;
    i = 0;
    while (n_max > i)
    {
        printf("Dame valor para posicion %d\n",i);
        scanf("%d", &a[i]);
        i = i + 1;
    }
    
}

int main(void) {

    int a[ARRAY_SIZE];
    int value;
    
    pedir_arreglo(ARRAY_SIZE,a);
    
    value=pedir_entero();
    
    struct bound_data result = check_bound(value, a, ARRAY_SIZE);

   
        printf("is upperbound?          :=%d \n", result.is_upperbound);  
        printf("is lowwerbound?         :=%d \n", result.is_lowerbound);  
        printf("it exists?              :=%u \n", result.exists);       
     
        if ((result.exists) == true)
    {
        printf("where it is positioned  :=%u \n", result.where);
    
    }

        if (result.exists==true)
        {
           if (result.is_lowerbound == true)
           {
                printf("is minimum \n");
           }  else if(result.is_upperbound == true){
                printf("is maximum \n");
           }
            
        }else if(result.exists == false){
            if (result.is_lowerbound == true)
            {
                printf("is lower limit \n");    
            } else if(result.is_upperbound == true){
                printf("is upper limit \n");
            }
        }
    return EXIT_SUCCESS;
}

