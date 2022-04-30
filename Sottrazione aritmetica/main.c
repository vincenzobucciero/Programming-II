/*
    Scrivere una function C per eseguire la sottrazione aritmetica
    in base 2 mediante gli operatori bitwise.
*/





#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 16
void dec_bin(unsigned short n, unsigned short bit[]);
void stampabit(short bit[]);
int sottrazione_aritmetica(int op1, int op2);

int main()
{
    int n1, n2, n3;
    short bit[MAXLEN], bit2[MAXLEN], bit3[MAXLEN];
    printf("Inserisci il minuendo:  \n");
    scanf(" %d", &n1);
    dec_bin(n1,bit);
    stampabit(bit);
    printf("\nInserisci il sottraendo:  \n");
    scanf(" %d", &n2);
    dec_bin(n2,bit2);
    stampabit(bit2);
    printf("\n");
    n3 = sottrazione_aritmetica(n1,n2);
    printf("Il risultato della SOTTRAZIONE ARITMETICA in decimale mediante bitwise e':  %d\n", n3);
    dec_bin(n3,bit3);
    printf("Il risultato della SOTTRAZIONE ARITMETICA in binario mediante bitwise e':  ");stampabit(bit3);

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


int sottrazione_aritmetica(int op1, int op2)
{
    int sub=0, pre=1;

        do{
            sub=op1^op2;
            pre=(~op1)&op2;
            pre=pre<<1;
            op1=sub;
            op2=pre;
        }while(pre>0);
        return sub;
}
