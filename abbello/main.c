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
#define MAX_LEN 16

void Visualizza_bit(unsigned char n);
unsigned char estrai_mask(unsigned char x, int operazione, int k);
unsigned char estrai_con_shift(unsigned char x, int operazione , int k);
unsigned char prod_div_2(unsigned char x, int operazione , int k);

int main()
{
    unsigned char x, Mask_estratta, Shift_estratti, prod_div_estratti;
    int operazione, bit_da_estrarre;
    unsigned char len;
    short bit[MAX_LEN];

        len = sizeof(unsigned char);
        printf("Insersci un intero:  ");
        scanf("%d", &x);
        printf("Il numero inserito x e' -> "); Visualizza_bit(x) ; printf("\n");
        printf("[1] Per estrarre i bit piu significativi\n");
        printf("[2] Per estrarre i bit meno significativi\n");
        scanf("%d", &operazione);
        printf("Inserisci il numero di bit da voler estrarre:  ");
        scanf("%d", &bit_da_estrarre);
        Mask_estratta = estrai_mask(x,operazione,bit_da_estrarre);
        Shift_estratti = estrai_con_shift(x, operazione, bit_da_estrarre);
        prod_div_estratti = prod_div_2(x, operazione, bit_da_estrarre);
        printf("Nuovo valore con estrazione con maschera:    %d = ", Mask_estratta); Visualizza_bit(Mask_estratta);printf("\n");
        printf("Nuovo valore con estrazione con shift:      %d = ", Shift_estratti); Visualizza_bit(Shift_estratti);printf("\n");
        printf("Nuovo valore con estrazione con * o / per 2:     %d = ", prod_div_estratti); Visualizza_bit(prod_div_estratti);printf("\n");



}



void Visualizza_bit(unsigned char n)
{
    while (n!=0)
        {
            if (n%2 == 1)
            printf ("1");
            else
                printf ("0");
                n /= 2;
        }
        return 0;
}


unsigned char estrai_mask(unsigned char x, int operazione, int k)
{
    unsigned char mask = 0, i;

        for(i=1;i<=k;i++)
        mask = mask<<1|1;
            if(operazione==1)
                return x&(mask<<sizeof(unsigned char)*8-k);
            else
                return x&mask;
}


unsigned char estrai_con_shift(unsigned char x, int operazione , int k)
{
    unsigned char len = sizeof(unsigned char)*8;

        if (operazione == 1){
            x = x >> (len-k);
            x = x << (len-k);
        }
        else if (operazione == 2){
            x = x << (len-k);
            x = x >> (len-k);
        }
        return x;
}


unsigned char prod_div_2(unsigned char x, int operazione , int k)
{
    unsigned char len = sizeof(unsigned char)*8;

        if (operazione == 1){
            x = x/pow(2,len-k);
            x = x*pow(2,len-k);
        }
        else if (operazione == 2){
            x = x*pow(2, len-k);
            x = x/pow(2,len-k);
        }
        return x;
}
