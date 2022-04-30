#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int numero, bit1, bit2, numero2;

        printf("Inserisci numero:  ");
        scanf(" %d", &numero);
        printf("Il numero in binario e' -> "); printBinary(numero);
        printf("\n");
        printf("Inserisci il primo bit da scambiare:  ");
        scanf(" %d", &bit1);
        printf("Inserisci il secondo bit da scambiare:  ");
        scanf(" %d", &bit2);
        printf("Numero in binario con i bit scambiati:  \n");
        numero2 = scambiabit(numero,bit1,bit2);
        printBinary(numero2);
        printf("Valore in decimale con i bit scambiati: %d", scambiabit(numero,bit1,bit2));


}
