/*
    Calcolare in C il risultato delle espressioni nella seguente tabella usando variabili intere char (una volta
    signed ed un’altra unsigned), visualizzando i singoli bit del risultato.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    unsigned char u;

        printf("Le operazioni sono:\n");
        s = 00010101 & 00000000; u = 00010101 & 00000000;
        printf("00010101 & 00000000 ->  %X (signed) %X (unsigned)\n", s,u);
        printf("                        %d              %d\n", s,u);
        s = 11111111 & 11111111; u = 11111111 & 11111111;
        printf("11111111 & 11111111 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = 00010101 & 11111111; u = 00010101 & 11111111;
        printf("00010101 & 11111111 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = 00010101 | 00000000; u = 00010101 | 00000000;
        printf("00010101 | 00000000 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = 11111111 | 11111111; u = 11111111 | 11111111;
        printf("11111111 | 11111111 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = 00010101 | 11111111; u = 00010101 | 11111111;
        printf("00010101 | 11111111 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = 00010101 ^ 00000000; u = 00010101 ^ 00000000;
        printf("00010101 ^ 00000000 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = 11111111 ^ 11111111; u = 11111111 ^ 11111111;
        printf("11111111 ^ 11111111 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = 00000000 ^ 11111111; u = 00000000 ^ 11111111;
        printf("00000000 ^ 11111111 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                        %d               %d\n", s,u);
        s = ~00010101; u = ~00010101;
        printf("~00010101 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("              %d               %d\n", s,u);
        s = ~11111111; u = ~11111111;
        printf("~11111111 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("              %d               %d\n", s,u);
        s = ~00000000; u = ~00000000;
        printf("~00000000 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("              %d               %d\n", s,u);
        s =  11110001 << 3; u =  11110001 << 3;
        printf(" 11110001 << 3 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
        s =  11110100 << 1; u =  11110100 << 1;
        printf(" 11110100 << 1 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
        s =  11110101 << 2; u =  11110101 << 2;
        printf(" 11110101 << 2 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
        s =  11110100 >> 2; u =  11110100 >> 2;
        printf(" 11110100 >> 2 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
        s =  11111010 >> 1; u =  11111010 >> 1;
        printf(" 11111010 >> 1 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
        s = 11111010 >> 3; u = 11111010 >> 3;
        printf(" 11111010 >> 3 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
        s =  11111111 & ~0; u =  11111111 & ~0;
        printf(" 11111111 & ~0 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
        s =   11111111 ^ ~0; u =  11111111 ^ ~0;
        printf(" 11111111 ^ ~0 ->  %X (signed)  %X (unsigned)\n", s,u);
        printf("                   %d               %d\n", s,u);
}
