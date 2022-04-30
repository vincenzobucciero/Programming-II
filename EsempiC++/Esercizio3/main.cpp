#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned short N = 125;

        bitset<8> Bits(N);

        cout << "Bits = " << Bits << endl;

        bitset<8> Bits2 = 0x0f;

        cout << Bits << " & 00001111 = " << (Bits2 & Bits) << endl;

        return 0;
}
