/*
    Scrivere una funzione C++ per contare il numero di bit uguali a zero e il numero di bit uguali a 1 in una
    variabile di tipo int, facendo uso del template bitset<N> (e dei metodi collegati) e visualizzando i singoli
    bit del risultato (vedi https://www.cplusplus.com/reference/bitset/bitset/ per la documentazione).
*/

#include <iostream>
#include <bitset>

#define N 16

using namespace std;

int main()
{
    bitset<N> c (string("1111101000110101"));
	cout << c << " ha esattamente ";
	cout << c.count() << " uno e ";
	cout << (c.size() - c.count()) << " zeri. \n";

}
