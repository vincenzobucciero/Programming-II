/*
    Scrivere una function C di conversione di un intero positivo
    da base 2 a base 10 che generi un array di caratteri contenenti
    le cifre decimali.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 8
short array_dec_bin(unsigned char n, unsigned char bit[], unsigned char cifre_decimali[]);


int main()
{
    unsigned char numero;
    short int n_cifre,i;
    unsigned char bit[MAXLEN];
    unsigned char cifre_dec[MAXLEN];


    printf("Inserisci un numero:  ");
    scanf(" %d", &numero);
    n_cifre = array_dec_bin(numero, bit, cifre_dec);
    printf("Array di caratteri contenenti le cifre decimali\n");
    for(i=n_cifre-1;i>=0; i--)
       printf(" [%c]", cifre_dec[i]+48);
    printf("\n");
    return 0;

}


short array_dec_bin(unsigned char n, unsigned char bit[], unsigned char cifre_decimali[])
{
    short int  i,q, pot=1;
    unsigned char decimale = 0;

    for(i=0;i<MAXLEN;i++){
        bit[i]=0;
        cifre_decimali[i]=0;
    }
    i=0; q=n;
        do{
            bit[i++] = q%2;
            q = q/2;
        }while (q!=0&&i<MAXLEN);

    for(i=0;i<MAXLEN;i++)
        decimale += bit[i]*(pot<<i);

    i=0; q = decimale;
    do{
        cifre_decimali[i++] = q%10;
        q = q/10;
    }while(q!=0&&i<MAXLEN);
    return i;

}


