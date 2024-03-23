//Seminar 6a:
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void calcul(double suma, double dobanda, double ani, double& rataLunara, double& totalRate)
{
	double i = dobanda / 100.0 / 12;
	double n = ani * 12;
	double discount = ((pow(double(1 + i), n)) - 1) / (i * (pow(double(1 + i), n)));

	rataLunara = suma / discount;
	totalRate = n * rataLunara;
}

int main() {
	double suma;
	double dobanda;
	double ani;

	cout << "Suma imprumutata: "; cin >> suma;
	cout << "Dobanda anuala: "; cin >> dobanda;
	cout << "Perioada(nr. ani): "; cin >> ani;
	double rataLunara;
	double totalRate;
	calcul(suma, dobanda, ani, rataLunara, totalRate);

	//double i = dobanda1 / 100.0 / 12;
	//double n = ani1 * 12;
	//double discount1 = ((pow(double(1 + i), n)) - 1) / (i * (pow(double(1 + i), n)));

	//double rata = suma1 / discount1;
	cout << "Rata lunara este: " << rataLunara << endl;
	//double total = n * rata;
	cout << "Suma totala a ratelor este: " << totalRate << endl;
	system("pause");
	return 0;
}


//Seminar 6b:

//a) numai cu functia main, pentru o singura functie

int main()
{
	string denumire;
	string domeniuActivitate;
	float venit, cheltuieli, profit, impozit;
	int procent;

	cout << "Denumirea firmei: "; cin >> denumire;
	cout << "Domeniul de activitate al firmei: "; cin >> domeniuActivitate;
	cout << "Venitul firmei:"; cin >> venit;
	cout << "Cheltuielile firmei: "; cin >> cheltuieli;

	profit = venit - cheltuieli;

	if (domeniuActivitate == "agricultura")
		procent = 9;
	else
		procent = 16;

	impozit = (float)procent / 100 * profit;

	system("cls");
	cout << "\nDenumirea firmei: " << denumire << endl;
	cout << "Domeniul de activitate al firmei: " << domeniuActivitate << endl;
	cout << "Profitul calculat: " << profit << endl;
	cout << "Procentul de impozitare: " << procent << "%" << endl;
	cout << "Valoarea impozitului calculat: " << impozit << endl;

	return 0;
}


//b) cu 3 functii void

string denumire;
string domeniuActivitate;
float venit[50], cheltuieli[50], profit[50], impozit[50];
int procent[50], n;

void introducere()
{
	cout << "Numarul de firme: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nDenumirea firmei" << i + 1 << ": "; cin >> denumire[i];
		cout << "Domeniul de activitate al firmei: "; cin >> domeniuActivitate[i];
		cout << "Venitul firmei:"; cin >> venit[i];
		cout << "Cheltuielile firmei: "; cin >> cheltuieli[i];
	}
}

void calcul()
{
	for (int i = 0; i < n; i++)
	{
		profit[i] = venit[i] - cheltuieli[i];
		if (domeniuActivitate == "agricultura")
			procent[i] = 9;
		else
			procent[i] = 16;
		impozit[i] = (float)procent[i] / 100 * profit[i];
	}
}

void afisare()
{
	system("cls");
	for (int i = 0; i < n; i++)
	{
		cout << "\nDenumirea firmei" << i + 1 << ": " << denumire[i] << endl;
		cout << "Domeniul de activitate al firmei: " << domeniuActivitate[i] << endl;
		cout << "Profitul calculat: " << profit[i] << endl;
		cout << "Procentul de impozitare: " << procent[i] << "%" << endl;
		cout << "Valoarea impozitului calculat: " << impozit[i] << endl;
	}
}

int main()
{
	introducere();
	calcul();
	afisare();
	return 0;
}

