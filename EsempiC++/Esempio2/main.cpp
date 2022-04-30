#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<8> A='A', a='a', B='B', b='b', r;

        r = A^a;
        cout << "A = " << A << endl;
        cout << "a = " << a << endl;
        cout << "A^a = " << r << endl;
        cout << "dec = " << r.to_ulong() << endl;
        cout << "r.size = " << r.size() << endl;
        cout << "r.count = " << r.count() << endl;
        return 0;
}
