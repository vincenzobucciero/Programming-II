/*
    Scrivere una function C per estrarre dalla variabile intera X i k bit piu' significativi o meno significativi,
    dove X e k sono i parametri di input, usando:
        1)Una maschera.
        2)L’operatore di shift (>> o <<).
        3)Il prodotto o la divisione per potenza 2.
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXLEN 16

unsigned char estrai_mask(unsigned char x, int scelta, int k);
unsigned char estrai_con_shift(unsigned char x, int scelta, int k);
unsigned char prod_div_2(unsigned char x, int scelta, int k);
int printBinary(int n);

int main()
{
    unsigned char x, Mask_estratta, Shift_estratti, prod_div_estratti;
    short bit[MAXLEN];
    unsigned char len;
    int op;
    int bit_da_estrarre;

        printf("Inserisci un intero:  ");
        scanf(" %d", &x);
        printf("Numero x in binario:  "); printBinary(x);
        printf("[1] Per estrarre i bit piu significativi\n");
        printf("[2] Per estrarre i bit meno significativi\n");
        scanf(" %d", &op);
        printf("Quanti bit vuoi estrarre?  ");
        scanf(" %d", &bit_da_estrarre);
        Mask_estratta = estrai_mask(x,op,bit_da_estrarre);
        Shift_estratti = estrai_con_shift(x,op,bit_da_estrarre);
        prod_div_estratti = prod_div_2(x,op,bit_da_estrarre);
        printf("Valore estratto con la maschera:  %d =  ", Mask_estratta); printBinary(Mask_estratta);
        printf("Valore estratto con gli shift:    %d =  ", Shift_estratti); printBinary(Shift_estratti);
        printf("Valore estratto tramite * o / di 2:   %d = ", prod_div_estratti); printBinary(prod_div_estratti);

        return 0;


}


unsigned char prod_div_2(unsigned char x, int scelta, int k)
{
    unsigned char len = sizeof(unsigned char)*8;

    if(scelta == 1){
        x = x/pow(2,len-k);
        x = x*pow(2,len-k);
    }
    else if(scelta == 2){
        x = x*pow(2,len-k);
        x = x/pow(2,len-k);
    }
    return x;
}


unsigned char estrai_con_shift(unsigned char x, int scelta, int k)
{
    unsigned char len = sizeof(unsigned char)*8;

    if(scelta == 1){
        x = x >> (len-k);
        x = x << (len-k);
    }
    else if (scelta == 2){
        x = x << (len-k);
        x = x >> (len-k);
    }
    return x;
}


unsigned char estrai_mask(unsigned char x, int scelta, int k)
{
    unsigned char mask = 0, i;
        for(i=1;i<=k;i++)
            mask = mask<<1|1;
        if(scelta==1)
            return x&(mask<<(sizeof(unsigned char)*8-k));
        else if(scelta == 2)
            return x & mask;
}





int printBinary(int n)
{
    unsigned i;

        for (i=1<<31; i>0; i=i/2)
            (n&i) ? printf("1") : printf("0");
        printf("\n");
}



