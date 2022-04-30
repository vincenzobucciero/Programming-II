/*
    Scrivere una funzione C per scambiare il valore di due bit, fissati in input, di una variabile intera. Es.: bit 1 e 2
    di 0000 1100 ⇒ 0000 1010; il bit 1 diventa uguale al bit 2 e il bit 2 diventa uguale al bit 1.
*/



#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 32

void bitshow(short len, char ch[], char bit[MAXLEN]);

int scambiabit(int numero, int b1, int b2);

void Visualizza_bit(int n);





int main()
{
    int numero,k,numero2,bit1,bit2;
    char bit[MAXLEN];


    /*union word32bit{
        long l;
        short s[2];
        char c[4];
        }word;*/


    printf("Inserisci un numero:  ");
    scanf(" %d", &numero);
    //bitshow(sizeof(char), numero, bit);

    Visualizza_bit(numero);
    printf("\n");

    printf("Inserisci il primo bit da voler scambiare:  ");
    scanf(" %d", &bit1);
    printf("Inserisci il secondo bit da voler scambiare:  ");
    scanf(" %d", &bit2);

    numero2 = scambiabit(numero,bit1, bit2);

    Visualizza_bit(numero2);

    printf("\n");

    printf("Valore in decimale con i bit scambiati: %d", numero2);

    printf("\n");


}

/*
void bitshow(short len, char ch[], char bit[MAXLEN])
{
    short j, jc;
    char c;

    for(j=0;j<MAXLEN;j++)
        bit[j]=0;
    for(jc=0;jc<len;jc++){
        c=ch[jc];
        for(j=0;j<8;j++){
            bit[j+8*jc]= c&1;
            c = c >> 1;
        }

    }
}
*/



int scambiabit(int numero, int b1, int b2)
{
    int mask1 = (numero>>b1)&1;
    int mask2 = (numero>>b2)&1;
    int xor_mask = mask1 ^ mask2;

        numero = numero ^ (xor_mask<<b1);
        numero = numero ^ (xor_mask<<b2);

        return numero;

}


void Visualizza_bit(int n)
{
    int i;

     for (i=1<<7; i>0; i=i/2)
            (n&i) ? printf("1") : printf("0");
        printf("\n");
}



