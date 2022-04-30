/**
    Scrivere una function C che, dopo aver estratto i bit da una variabile intera X (tipo char, short o long),
    ne calcola il relativo valore dalla formula: Val_X = b[n-1]2^(n-1)+...+b[2]2^2+b[1]2^1+b[0]2^0 dove b e’ l’array dei bit di X.
    Confrontare il risultato con il valore della variabile X dichiarata una volta signed ed un’altra unsigned.

**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"

#define MAX_LEN 32

typedef  union word32bit {
        long l;
        short s[2];
        char c[4];
        }word;

int main()
{
    word w;
    int i, op;
    char bit[MAX_LEN];

    char  ch=0;
    long  lo=0;
    short sh=0;
    unsigned char  un_ch=0;
    unsigned long  un_lo=0;
    unsigned short un_sh=0;

    do{
        printf("[1] per inserire un intero char (1 byte)\n");
        printf("[2] per inserire un intero short (2 byte)\n");
        printf("[3] per inserire un intero long (4 byte)\n");
        scanf(" %d", &op);

        switch(op){


            case 1:
                printf("Inserisci un intero char:  \n");
                scanf(" %d", &w.c[0]); fflush(stdin);
                bitshow(sizeof(char),w.c,bit);
                for (i = 0; i < 8*sizeof(char); i++){
                            ch += bit[i]*(pow(2,i));

                        }
                        for (i = 0; i < 8*sizeof(char); i++){
                            un_ch += bit[i]*(pow(2,i));

                        }
                        printf("\nStringa binaria: \n");Visualizza_bit(bit, sizeof(char));
                        printf("\nValore signed char: %d\n",ch);
                         printf("\nValore unsigned char: %d\n",un_ch);
                          break;


            case 2:
                printf("Inserisci un intero short:  \n");
                scanf(" %hd", &w.s[0]);
                bitshow(sizeof(short),w.s,bit);
                for (i = 0; i < 8*sizeof(short); i++){
                            sh += bit[i]*(pow(2,i));

                        }
                        for (i = 0; i < 8*sizeof(short); i++){
                            un_sh += bit[i]*(pow(2,i));

                        }
                        printf("\nStringa binaria: \n");Visualizza_bit(bit, sizeof(short));
                        printf("\nValore signed char: %d\n",sh);
                         printf("\nValore unsigned char: %d\n",un_sh);
                          break;


            case 3:
                printf("Inserisci un intero long:  \n");
                scanf(" %ld", &w.c);
                bitshow(sizeof(long),w.c,bit);
                for (i = 0; i < 8*sizeof(long); i++){
                            lo += bit[i]*(pow(2,i));

                        }
                        for (i = 0; i < 8*sizeof(long); i++){
                            un_lo += bit[i]*(pow(2,i));

                        }
                        printf("\nStringa binaria: \n");Visualizza_bit(bit, sizeof(long));
                        printf("\nValore signed char: %d\n",lo);
                         printf("\nValore unsigned char: %d\n",un_lo);
                          break;


            }
    }while (op != 0);
}

