#define MAX_LEN 32
void bitshow(short len, char ch[], char bit[MAX_LEN])
{
    short j, jc;
    char c;

        for(j=0;j<MAX_LEN;j++)
            bit[j]=0;
        for(jc=0;jc<len;jc++){
            c=ch[jc];
            for(j=0;j<8;j++){
                bit[j+8*jc] = c&1;
                c = c >> 1;
            }
        }
}


void Visualizza_bit(char bit[], int len )
{
    int k;

        for (k=len*8-1;k>=0;k--){
            printf("%d", bit[k]);
            if(k%8==0)
                printf(" ");
        }

}
