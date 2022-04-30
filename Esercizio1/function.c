char low_up(char ch)
{

        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            ch = ch^32;
            return ch;


}
