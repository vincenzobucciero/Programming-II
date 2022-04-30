#include<iostream>
#include<bitset>
#include <ctime>
#define Nstud 20
using namespace std;



int main()
{     
	unsigned int Nlez = 12;
	bitset <Nstud> presenze[Nlez];
	unsigned int pres_tot[100];
	
	
	
	cout << "Presenze di tutti gli studenti (colonna) per ogni lezione (riga) \n";
    for (unsigned int k=0; k<Nlez; k++) 
	{
			cin >>  presenze[k]; // legge dal file testo presenzeLez.txt 
			cout << presenze[k] << endl;
			
	}
	
	
	for(unsigned int i=0;i<Nstud;i++)
		pres_tot[i]=0;
		for(int iPresenza=0; iPresenza<20; iPresenza++)
		{
			for(int iLezioni=0; iLezioni<12; iLezioni++)
			{
				pres_tot[iPresenza] += (int)presenze[iLezioni][iPresenza];
				
			}
			
		}
		
		
		unsigned int temp;
		for(int i=0;i<10;i++)
		{
			temp = pres_tot[19-i];
			pres_tot[19-i]=pres_tot[i];
			pres_tot[i]=temp;
		}
		
		cout << "Presenze:  ";
			for(int i=0;i<Nstud;i++)
				cout << " " << pres_tot[i];
	
	
		
		/*for(int i=0; i<10;i++)
		{
			int temp;
			temp = pres_tot[20-1-i];
			pres_tot[20-1-i]=pres_tot[i];
			pres_tot[i]=temp;
		}
		cout <<"Presenze:  ";
		for(int i=0;i<Nstud;i++)
			cout << " " << pres_tot[i] ;*/
			
		
			
	
		

	// ESEMPIO    srand(time(NULL)); 
	//srand(time(NULL));
	int L = rand()%Nlez;  // fissa una lezione random */
	//int S = rand()%Nstud; // fissa uno studente random   
	
	cout << "\nLezione numero:  "<< L+1 << endl;
	cout << "Studenti presenti a questa lezione:   " << presenze[L].count() << endl;
	
	cout << "Studente numero:  ";
	for (int i=19;i>=0; i--)
	{
		if(presenze[L].test(i) == i)
			cout << " " << 20-i;
	}
	
	/*cout << "studente numero: " << S+1<< " presente alla lezione numero: " << L+1	<< "?" << endl; 
    cout << "\t\t\t"          << ( (presenze[L].test(S)) ? "SI, presente" : "NO, assente" ) << endl;    // AGGIUNGERE CODICE E FUNZIONI */
	
	
	
	return EXIT_SUCCESS;
} 


