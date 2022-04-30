char rotate_ch(char ch, int n_bit)
{
    if(n_bit < 0){
        ch = ch << n_bit * -1;
        return ch;
    }
    else if(n_bit > 0)
        {
            ch = ch >> n_bit;
            return ch;
    }
}
