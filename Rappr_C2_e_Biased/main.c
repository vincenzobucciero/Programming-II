#include <stdio.h>
#include <stdlib.h>

int rapp_complemento(int n_numero, int n_bit);
void char_bit_division(int numero, int bit[32]);
int main()
{
    int n_bit, n_numero, bit[32];
     int complemento2, biased;

     printf( "Inserisci un numero: " );
     scanf(" %d", &n_numero);
     printf( "Inserisci il numero di bit su cui rappresentarlo: " );
     scanf(" %d", &n_bit);

     complemento2 = rapp_complemento(n_numero, n_bit);
     char_bit_division(complemento2,bit);

     printf( "Rappresentazione complemento a 2: %d\n", complemento2 );
     printf( "Rappresentazione complemento a 2 in binario: " );
     for(int i = n_bit-1 ; i >= 0; i--)
        printf("%d", bit[i]);
}


void char_bit_division(int numero, int bit[32])
{
    int k = 0, j;

    do
    {
        bit[k++] = numero%2;
        numero = numero/2;
    }while(numero > 0);

    for(j = k; j < 32; j++)
    {
        bit[j] = 0;
    }
}


int rapp_complemento(int n_numero, int n_bit)
{
    int potenza = pow(2,n_bit);
    return (potenza + n_numero) % potenza;
}
