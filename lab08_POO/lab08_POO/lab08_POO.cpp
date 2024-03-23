#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>
using namespace std;


//3)totul într-un singur fișier cu tipul class (clasa avand toti membrii privati și avand functii publice pentru citire, calcul si returnare membrii de afișat).
class firma {
	string denumire_firma;
	string domeniu_de_activitate;
	float venit, cheltuieli, profit, impozit;
	int procent_impozit;


public: void citire()
{
	cout << "Denumire firmei: "; cin >> denumire_firma;
	cout << "\nDomeniu de activitate: "; cin >> domeniu_de_activitate;
	cout << "\nVenit: "; cin >> venit;
	cout << "\nCheltuieli: "; cin >> cheltuieli;
}

	  void calcul()
	  {
		  profit = venit - cheltuieli;

		  if (domeniu_de_activitate == "IT")
			  procent_impozit = 0;
		  else if (domeniu_de_activitate == "agricultura")
			  procent_impozit = 9;
		  else
			  procent_impozit = 16;

		  impozit = procent_impozit / (100 * profit);
	  }

	  void returnare()
	  {
		  cout << "\nProfitul = " << profit;
		  cout << "\nProcent impozit = " << procent_impozit;
		  cout << "\nValoare impozit = " << impozit;
	  }

};


int main()
{
	firma f;
	f.citire();
	f.calcul();
	f.returnare();
}


/*
4)	Cu tipul class ca la punctul 3, dar cu un array de obiecte de tipul class, pentru n firme, n citit de la tastatura.
Să se utilizeze o funcție void pentru introducere și una tot void pentru afișare tabelară.

i.	funcția void pentru introducere va conține numărul n de firme și va apela funcțiile anterioare pentru citire și calcul într-o buclă for
ii.	firma f[50] și n vor fi variabile globale

*/

firma f[50];
int n;

void introducere() {
	cout << "Introduceti numarul de firme: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		f->calcul();
		f->citire();
		return;
	}
}

void afisare() {
	system("cls");
	cout << "Denumire firma\n";
	cout << "---------------------------------------------------------------------------\n";

}


/*
5)	Punctul 4 cu alocarea dinamică a memoriei (arrayul se declara dinamic cu 100 elemente)
memorie ar trebui eliberată, astfel încât memoria să devină din nou disponibilă pentru alte cereri de memorie dinamică. Avem variabile globale.
*/


/*
6)	Se modifica punctul 5, dar fără variabile globale, cu transmiterea valorilor din array de la o funcție la alta prin parametri
Array-ul se declara dinamic  în main, n și elementele arrayului se citesc în funcția void introducere.
De asemenea numarul de elemente din array și elementele array-ului se transmit ca parametri funcției void afisare care face afișarea tabelară
*/

