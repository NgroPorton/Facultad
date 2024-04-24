#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s) {
    unsigned int posicion=0;
    while (s[posicion] != '\0'){
        posicion++;
    }
    return posicion;
}
 
bool fstring_eq(fixstring s1, fixstring s2) {
    bool veracidad = true;
    int posicionamiento = 0; 
    
    if (fstring_length(s1) != fstring_length(s2))
    {
        veracidad = false;
    }
    
    while (veracidad == true && (s1[posicionamiento] != '\0') && (s2[posicionamiento] != '\0') )
    {
        if (s1[posicionamiento] != s2[posicionamiento])
        {
            veracidad = false; 
        }
        posicionamiento = posicionamiento + 1;
    }
    
    return veracidad;
}

 bool fstring_less_eq(fixstring s1, fixstring s2) {

    bool veracidad = fstring_length(s1)<=fstring_length(s2);
    unsigned int i = 0;

    while (i<fstring_length(s1) && i<fstring_length(s2)) {

        if (s1[i] == s2[i]) {
            i++;
        } else {
            if (s1[i] < s2[i]) {
                veracidad= true;
                i  = 101;
            } else {
                veracidad= false;
                i  =  101;
            }
        }
       
    }
 return veracidad;
 }
