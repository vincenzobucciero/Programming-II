#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<8> bits;
        cout << "Bits = " << bits << '\n';

    bits.set(3);
        cout << "Bits = " << bits << '\n';

    bits.set();
        cout << "Bits = " << bits << '\n';

    bits.flip(2);
        cout << "Bits = " << bits << '\n';

    bits.flip();
        cout << "Bits = " << bits << '\n';

    return 0;

}
