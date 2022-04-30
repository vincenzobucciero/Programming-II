#include <iostream>
#include <bitset>

#define N 17

using namespace std;

int main()
{
    bitset<N> c (string("11111010001101010"));
	cout << c << " ha esattamente ";
	cout << c.count() << " uno e ";
	cout << (c.size() - c.count()) << " zeri. \n"; 
		
}
