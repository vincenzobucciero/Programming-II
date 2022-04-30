int printBinary(int n)
{
    unsigned i;

        for (i=1<<31; i>0; i=i/2)
            (n&i) ? printf("1") : printf("0");
        printf("\n");
}




int scambiabit(int Numero, int b1, int b2)
{
    int mask1 = (Numero>>b1)&1;
    int mask2 = (Numero>>b2)&1;
    int xor_mask = mask1 ^ mask2;

        Numero = Numero ^ (xor_mask<<b1);
        Numero = Numero ^ (xor_mask<<b2);

        return Numero;
}
