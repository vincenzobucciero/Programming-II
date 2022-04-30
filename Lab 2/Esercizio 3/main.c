/*
    Mediante operatori bitwise, scrivere una funzione C per invertire (0 diventa 1 e 1 diventa 0) i 4 bit più
    significativi, lasciando gli altri inalterati, di
        • una variabile intera char.
        • una variabile intera short.
        • una variabile intera qualsiasi.
    Visualizzare i bit degli operandi e del risultato.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXLEN 32

void bitshow(short len, char ch[], char bit[MAXLEN]);


int main()
{

    int k, scelta;
    char bit[MAXLEN];

    union word32bit{
        long l;
        short s[2];
        char c[4];
    }word;

    printf("[1] Per inserire un char\n");
    printf("[2] Per inserire uno short\n");
    printf("[3] Per inserire un long\n");
    scanf(" %d", &scelta);

    switch(scelta){

        case 1:
                printf("Inserisci il char:  \n");
                scanf(" %d", &word.c[0]);
                bitshow(sizeof(char), word.c, bit);

                printf("Operando:  \n");

                for(k=0;k<sizeof(char)*8;k++)
                    (k%4==0) ? printf(" %d", bit[k]) : printf("%d", bit[k]);

                for(k=0;k<sizeof(char)*8;k++){
                    if(k>=0 && k<4)
                        bit[k]=bit[k]^1;
                }

                printf("\n");

                printf("Nuovo risultato:  \n");
                for(k=0;k<sizeof(char)*8;k++)
                    (k%4==0) ? printf(" %d", bit[k]) : printf("%d", bit[k]);
                break;



        case 2: printf("Inserisci lo short:  \n");
                scanf(" %hd", &word.c[0]);
                bitshow(sizeof(short), word.c, bit);

                printf("Operando:  \n");

                for(k=0;k<sizeof(short)*8;k++)
                    (k%4==0) ? printf(" %hd", bit[k]) : printf("%hd", bit[k]);

                for(k=0;k<sizeof(short)*8;k++){
                    if(k>=0 && k<4)
                        bit[k]=bit[k]^1;
                }

                printf("\n");

                printf("Nuovo risultato:  \n");
                for(k=0;k<sizeof(short)*8;k++)
                    (k%4==0) ? printf(" %hd", bit[k]) : printf("%hd", bit[k]);
                break;


        case 3: printf("Inserisci il long:  \n");
                scanf(" %ld", &word.c);
                bitshow(sizeof(long), word.c, bit);

                printf("Operando:  \n");

                for(k=0;k<sizeof(long)*8;k++)
                    (k%4==0) ? printf(" %ld", bit[k]) : printf("%ld", bit[k]);

                for(k=0;k<sizeof(long)*8;k++){
                    if(k>=0 && k<4)
                        bit[k]=bit[k]^1;
                }

                printf("\n");

                printf("Nuovo risultato:  \n");
                for(k=0;k<sizeof(long)*8;k++)
                    (k%4==0) ? printf(" %ld", bit[k]) : printf("%ld", bit[k]);
                break;

    }

}





void bitshow(short len, char ch[], char bit[MAXLEN])
{
     short j, jc;
     char c;

        for(j=0;j<MAXLEN;j++)
            bit[j]=0;
        for(jc=0;jc<len;jc++){
            c=ch[jc];
            for(j=0;j<8;j++){
                bit[j+8*jc] = c&1;
                c = c >> 1;
            }
        }
}
