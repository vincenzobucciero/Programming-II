/**
Scrivere una function C char low_up(char ch) che cambia il carattere in input
da minuscolo a maiuscolo e viceversa automaticamente
**/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
   char c;

    printf("Inserisci un carattere:  ");
    scanf(" %c", &c);

    printf("Il carattere inserito '%c' diventa '%c'", c, low_up(c));
    return 0;
}
