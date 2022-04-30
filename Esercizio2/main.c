/**
    Scrivere una function C char rotate(char ch, char n_bit) per ruotare di n bit (n_bit),
    verso sinistra o verso destra (rispettivamente per n_bit<0 e per n_bit>0),
    il contenuto di una variabile char mediante gli operatori bitwise
**/


#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    char c, c_rotate;
    int n_bit;

        printf("Inserisci un carattere:  ");
        scanf(" %c", &c);

        printf("\nDi quanti bit ti vuoi spostare? (n_bit > 0 per shift verso destra o n_bit < 0 per shift verso sinistra):  ");
        scanf(" %d", &n_bit); fflush(stdin);

        c_rotate = rotate_ch(c,n_bit);
        printf("Il carattere '%c' shiftato diventa '%c'", c, c_rotate);

    return 0;
}
