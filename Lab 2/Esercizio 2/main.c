/*
   Calcolare il risultato delle seguenti espressioni C e spiegarne il risultato:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    unsigned char u;

        s = 0XFF;
        u = s;

            printf("\ns = 0XFF = 11111111 = %d (unsigned) = %d (signed)\n", u,s);
            s = -96; u = s;
            s = s >> 6; u = u >> 6;
            printf("s >> 6 = %X (unsigned) = %X (signed)\n", u,s);
            printf(" = %d = %d\n", u,s);
            s = 244; u = s;
            s = s >> 2; u = u >> 2;
            printf("s >> 2 = %X (unsigned) = %X (signed)\n", u,s);
            printf(" = %d = %d\n", u,s);
}
