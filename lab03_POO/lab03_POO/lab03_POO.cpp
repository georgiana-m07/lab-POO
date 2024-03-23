#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


//varianta fara functii
int main()
{
	string denumire;
	float pi, pf;
	int pr;
	char r;

	cout << "Introduceti denumirea produsului "; cin >> denumire;
	cout << "Introduceti pretul initial "; cin >> pi;
	cout << "Introduceti procentul de reducere "; cin >> pr;
	cout << "Are reducere suplimentara: d/D "; cin >> r;

	if (r == 'd' || r == 'D')
		pr = pr + 15;

	pf = pi * (1 - pr / 100.0);

	cout << "Pretul final este " << pf;
	return 0;
}


//varianta cu functie void fara parametrii
float pi, pf;
int pr;

void functie1();

int main()
{
	string denumire;
	char r;

	cout << "Introduceti denumirea produsului "; cin >> denumire;
	cout << "Introduceti pretul initial "; cin >> pi;
	cout << "Introduceti procentul de reducere "; cin >> pr;
	cout << "Are reducere suplimentara: d/D "; cin >> r;

	if (r == 'd' || r == 'D')
		pr = pr + 15;

	functie1();

	cout << "Pretul final este " << pf;
	return 0;
}

void functie1()
{
	pf = pi * (1 - pr / 100.0);
}



//varianta cu functie void cu parametrii
float pf;

void functie2(float pi, int pr);

int main()
{
	string denumire;
	float pi;
	int pr;
	char r;

	cout << "Introduceti denumirea produsului "; cin >> denumire;
	cout << "Introduceti pretul initial "; cin >> pi;
	cout << "Introduceti procentul de reducere "; cin >> pr;
	cout << "Are reducere suplimentara: d/D "; cin >> r;

	if (r == 'd' || r == 'D')
		pr = pr + 15;

	functie2(pi, pr);

	cout << "Pretul final este de " << pf << " lei!\n";
	return 0;
}

void functie2(float pi, int pr)
{
	pf = pi * (1 - pr / 100.0);
}



//varianta cu functie tip fara parametrii
float pi;
int pr;

float functie3()
{
	float pf;
	pf = pi * (1 - pr / 100.0);
	return pf;
}

int main()
{
	string denumire;
	char r;

	cout << "Introduceti denumirea produsului "; cin >> denumire;
	cout << "Introduceti pretul initial "; cin >> pi;
	cout << "Introduceti procentul de reducere "; cin >> pr;
	cout << "Are reducere suplimentara: d/D "; cin >> r;

	if (r == 'd' || r == 'D')
		pr = pr + 15;

	cout << "Pretul final este de " << functie3() << " lei!\n";
	return 0;
}


//varianta cu functei tip cu parametrii

float functie4(float pi, int pr)
{
	float pf;
	pf = pi * (1 - pr / 100.0);
	return pf;
}

int main()
{
	string denumire;
	float pi;
	int pr;
	char r;

	cout << "Introduceti denumirea produsului "; cin >> denumire;
	cout << "Introduceti pretul initial "; cin >> pi;
	cout << "Introduceti procentul de reducere "; cin >> pr;
	cout << "Are reducere suplimentara: d/D "; cin >> r;

	if (r == 'd' || r == 'D')
		pr = pr + 15;

	cout << "Pretul final este de " << functie4(pi, pr) << " lei!\n";
	return 0;
}


