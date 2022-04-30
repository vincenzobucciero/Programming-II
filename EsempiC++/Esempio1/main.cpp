#include <iostream>

using namespace std;

int main()
{
    bool x = 0;
    bool y = 100;
    bool z = 15.75;

        cout << "sizeof(char) = " << sizeof(char) << endl;
        cout << "sizeof(short) = " << sizeof(short) << endl;
        cout << "sizeof(long) = " << sizeof(long) << endl;
        cout << "sizeof(long long) = " << sizeof(long int) << endl;
        cout << "sizeof(char *) = " << sizeof(char*) << endl;

        cout << "x = " << boolalpha << x << endl;
        cout << "y = " << boolalpha << y << endl;
        cout << "z = " << boolalpha << z << endl;

        return 0;

}
