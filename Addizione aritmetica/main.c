/*
    Scrivere una function C per eseguire l'addizione aritmetica(Versione1)
    in base 2 mediante gli operatori bitwise.
*/



#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 16
void dec_bin(unsigned short n, unsigned short bit[]);
void stampabit(short bit[]);
short addizione_aritmetica(short op1, short op2);

int main()
{
    short i,n1, n2, n3, bit[MAXLEN], bit2[MAXLEN], bit3[MAXLEN];
    printf("Inserisci primo numero:  ");
    scanf(" %hd", &n1);
    dec_bin(n1,bit);
    stampabit(bit);
    printf("\nInserisci secondo numero:  ");
    scanf(" %hd", &n2);
    dec_bin(n2,bit2);
    stampabit(bit2);
    n3 = addizione_aritmetica(n1,n2);
    printf("\n");
    dec_bin(n3,bit3);
    printf("L'ADDIZIONE ARITMETICA tra i due operandi in binario e':  \n");
    stampabit(bit3);

    return 0;
}



void dec_bin(unsigned short n, unsigned short bit[])
{
    short r, q=0;

        do{
            bit[q++]=n%2;
            n=n/2;
        }while(n!=0&&q<MAXLEN);

        while(q<MAXLEN)
            bit[q++]=0;
}


void stampabit(short bit[])
{
    short i;

        for(i=MAXLEN-1;i>=0;i--){
            printf("%hd", bit[i]);
            if(i%4==0)
                printf(" ");
        }
}


short addizione_aritmetica(short op1, short op2)
{
    short i,somma=0, riporto=1;

        do{
            somma = op1^op2;
            riporto = op1&op2;
            riporto = riporto << 1;
            op1 = somma;
            op2 = riporto;
        }while (riporto>0);
        return somma;
}
