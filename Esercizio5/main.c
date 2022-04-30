/*
    Scrivere due function C di conversione di un intero positivo (int) da base 10 a base 2
    mediante l’ algoritmo delle divisioni successive realizzato rispettivamente:
        - Usando gli operatori di quoziente e resto della divisione intera;
        - Usando gli operatori bitwise.
*/


#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 16
void char_bit_divisioni(unsigned short n, unsigned short bit[]);
void Stampa_Bit(short Bit[]) ;
void trasform_bitwise(unsigned short n, unsigned short bit[]);

int main()
{
    unsigned short i,numero, numero2;
    short bit[MAXLEN];

       printf("\nInserisci un numero in base 10:  \n");
       scanf(" %hd", &numero);
       printf("CONVERSIONE SECONDO GLI OPERATORI DI RESTO E QUOZIENTE\n");
       char_bit_divisioni(numero,bit);
       Stampa_Bit(bit);
        printf("\nCONVERSIONE SECONDO GLI OPERATORI BITWISE\n");
        trasform_bitwise(numero,bit);
        Stampa_Bit(bit);
}


void char_bit_divisioni(unsigned short n, unsigned short bit[])
{
    short r, q=0;

        do {
            bit[q++] = n%2;
            n = n/2;
        } while (n!=0&&q<MAXLEN);

        while(q<MAXLEN)
        bit[q++]=0;

}

void Stampa_Bit(short Bit[])
{
     short i;

      for(i=MAXLEN-1;i>=0;i--)
        {
             printf("%hd", Bit[i]);
             if(i%4==0)printf(" ");          //Arrivato ad ogni 8 bit, prenditi uno spazio

        }

}


void trasform_bitwise(unsigned short n, unsigned short bit[])
{
    short r, q=0;

        do{
            bit[q++]=n%2;
            n=n>>1;
        }while(n!=0&&q<MAXLEN);

        while(q<MAXLEN)
            bit[q++]=0;
}
