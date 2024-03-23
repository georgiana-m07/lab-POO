#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
using namespace std;

//1. Scrieți codul în funcția main pentru un program care convertește temperatura din Fahrenheit în Celsius.
double convertire(double s)
{
	return(s - 32) / 1.8;
}


/*2. Scrieți codul în funcția main pentru un program care calculeză suma cifrelor unui
număr utilizând o funcție cu tip recursivă(o funcție care se autoapeleză)*/
int calcul1(int a) {
	if (a != 0)
		return a % 10 + calcul1(a / 10);
	else
		return 0;
}

int main()
{
	int a;
	cout << "Introdu numarul: "; cin >> a;
	int suma1 = calcul1(a);
	cout << "Suma cifrelor numarului " << a << " este: " << suma1;

	return 0;
}

/*Reluați aplicația cu o funcție care conține o instrucțiune for pentru a calcula suma cifrelor.
Observație
2
for (; a != 0; a = a / 10)*/
int calcul2(int b)
{
	for (; b != 0; b = b / 10)
		return b % 10 + calcul2(b / 10);
}

int main()
{
	int b;
	cout << "Introdu numarul: "; cin >> b;
	int suma2 = calcul2(b);
	cout << "Suma cifrelor numarului " << b << " este: " << suma2;

	return 0;
}


/*3. Scrieți codul în funcția main pentru un program care calculeză factorialul unui
număr utilizând o funcție cu tip recursivă
nr*functie(nr-1)
*/



/*4. Avem o clasă angajați cu membrii privați: codul angajatului, nume și salariu. Clasa
mai conține o funcție publică pentru citire și afișare membrii.
Se va declara dinamic un array de obiecte, pentru n angajați citit în main.Să se calculeze și
afișeze salariul maxim.Programul conține : o funcție void introducere, una void pentru maxim,
una void pentru afișare tabelară.
În main se va crea un meniu cu opțiuni pentru
Introducere
Calcul maxim
Afișare tabelara
Ieșire din program
*/
class angajati
{
	int cod_angajat;
	string nume_angajat;
	float salariu_angajat;

public:
	void citire()
	{
		cout << "Introduceti codul angajatului: "; cin >> cod_angajat;
		cout << "\nIntroduceti numele angajatului: "; cin >> nume_angajat;
		cout << "Introduceti salariul angajatului: "; cin >> salariu_angajat;
	}

	string get_nume()
	{
		return nume_angajat;
	}

	float get_salariu()
	{
		return salariu_angajat;
	}
};

angajati* ang = new angajati[50];
int n;

void introducere()
{
	cout << "Introduceti numarul angajatilor: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Angajatul " << i + 1 << endl;
		ang[i].citire();
	}
}

void calcul_maxim()
{
	float maxim_salariu;
	maxim_salariu = ang[0].get_salariu();
	string maxim_nume;

	for (int i = 0; i < n; i++)
	{
		if (ang[i].get_salariu() > maxim_salariu)
			maxim_salariu = ang[i].get_salariu();
		maxim_nume = ang[i].get_nume();
	}

	cout << "\nSalariul maxim este" << maxim_salariu << " si il are angajatul " << maxim_nume;

	system("pause");
}

void afisare_tabelara()
{
	system("cls");
	cout << "Nume\t\t\t\Salariu\n";
	cout << "...............................\n";
	for (int i = 0; i < n; i++)
		cout << ang[i].get_nume() << "\t\t\t" << ang[i].get_salariu() << endl;
	cout << ".................................\n";
	system("pause");
}

int main()
{
	int optiuni;
	do
	{
		cout << "\t\tMENIU\n\n";
		cout << "\n1.Introducere";
		cout << "\n2.Calcul maxim";
		cout << "\n3.Afisare tabelara";
		cout << "\n4.Iesire program";

		cout << "\nIntroduceti optiunea aleasa: "; cin >> optiuni;
		switch (optiuni)
		{
		case 1:
			introducere();
			break;
		case 2:
			calcul_maxim();
			break;
		case 3:
			afisare_tabelara();
			break;
		case 4:
			break;
		}

	} while (optiuni != 4);

	return 0;
}

