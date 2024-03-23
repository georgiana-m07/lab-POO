#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/*1)Să se afișeze bonificatia si suma de plată finala, scriind tot programul intr-un singur fișier
cu o singura funcție, int main(), cu variabile distincte.*/
int main()
{
	string nume;
	int nr_articole, nr_zile;
	float pret_inchiriere = 15.0;
	float bonificatie, suma_finala;
	cout << "Introduceti numele: "; cin >> nume;
	cout << "\nIntroduceti numarul de articole: "; cin >> nr_articole;
	cout << "\nIntroduceti numarul de zile: "; cin >> nr_zile;
	bonificatie = nr_articole * 10;
	suma_finala = nr_zile * nr_articole * pret_inchiriere - bonificatie;
	cout << "\nBonificatia este egala cu " << bonificatie << endl;
	cout << "Suma de plata finala este de " << suma_finala << " lei." << endl;
}


/*2)Să se afișeze bonificatia si suma de plată finala, scriind tot programul într-un singur fișier
dar cu o functie suplimentara void calcul cu parametri transmisi atat prin valoare
(cei care se introduc ca date de intrare pentru functie, adica numar zile si numar de articole),
cat si prin referinta (cei referinta se utilizeaza pentru bonificatie si suma finala care se calculeaza in functie).
Nu se vor folosi deloc variabile globale!!!
*/

void calcul(int nr_articole, int nr_zile, float &bonificatie, float &suma_finala,float pret_inchiriere = 15.0)
{
	bonificatie = nr_articole * 10;
	suma_finala = nr_zile * nr_articole * pret_inchiriere - bonificatie;
}

int main()
{
	string nume;
	int nr_articole, nr_zile;
	float pret_inchiriere, bonificatie, suma_finala;
	cout << "Introduceti numele: "; cin >> nume;
	cout << "\nIntroduceti numarul de articole: "; cin >> nr_articole;
	cout << "\nIntroduceti numarul de zile: "; cin >> nr_zile;
	calcul(nr_articole, nr_zile, bonificatie, suma_finala, pret_inchiriere);
	cout << "\nBonificatia este egala cu " << bonificatie << endl;
	cout << "Suma de plata finala este de " << suma_finala << " lei." << endl;
}



/*3)Să se declare o clasă Client, clasa avand toti membrii privați (nume, nr zile, nr produse, bonificația, suma de plată)
și având o funcție publică pentru citire și calcul și functii publice pentru returnarea membrilor de afișat
(adica nume client, bonificatie și suma de plata). Să se lucreze cu un singur obiect de tipul Client și să se afișeze numele clientului,
bonificația și suma finala de plată.
*/

class client
{
	string nume;
	int nr_articole, nr_zile;
	float pret_inchiriere = 15.0;
	float bonificatie, suma_finala;

public: void citire()
{
	cout << "Introduceti numele: "; cin >> nume;
	cout << "\nIntroduceti numarul de articole: "; cin >> nr_articole;
	cout << "\nIntorduceti numarul de zile: "; cin >> nr_zile;
}
	  string get_nume()
	  {
		  return nume;
	  }

	  void calcul()
	  {
		  bonificatie = nr_articole * 10;
		  suma_finala = nr_zile * nr_articole * pret_inchiriere - bonificatie;
	  }

	  float get_bonificatie()
	  {
		  return bonificatie;
	  }

	  float get_suma()
	  {
		  return suma_finala;
	  }

	  void afisare()
	  {
		  cout << "\nNumele clientului este " << get_nume();
		  cout << "\nBonificatia este egala cu " << get_bonificatie() << endl;
		  cout << "Suma de plata finala este de " << get_suma() << " lei.";
		  system("pause");
	  }
};

int main()
{
	system("cls");
	client d;
	d.citire();
	d.calcul();
	d.afisare();
}


