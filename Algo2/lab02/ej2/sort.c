#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"


static void quick_sort_rec(int a[], unsigned int izq, unsigned int der) {
    unsigned int ppvi;

    if (der > izq)
    {

        ppvi = partition(a,izq,der);
        
        quick_sort_rec(a, izq, (ppvi==0u) ? 0u: ppvi - 1);

        quick_sort_rec(a, (ppvi + 1), der);
    }

}

void quick_sort(int a[], unsigned int length) {
    quick_sort_rec(a, 0u, (length == 0u) ? 0u : length - 1u);
}

