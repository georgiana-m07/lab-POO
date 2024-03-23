#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


//varianata fara nicio functie
/*
int main()
{
	float h, g, imc;
	string raspuns;
	cout << "Inaltimea in metrii(cu zecimale): "; cin >> h;
	cout << "Greutatea in kg(intreg sau cu zecimale): "; cin >> g;
	imc = g / (h*h);
	if (imc < 18, 5)
		raspuns = "Persoana subponderala";
	else if (imc >= 18.5 && imc < 25)
		raspuns = "Persoana normoponderala";
	else if (imc >= 25 && imc < 30)
		raspuns = "Persoana supraponderala";
	else if (imc >= 30)
		raspuns = "Persoana obeza";
	else
		raspuns = "Nu stiu bro";

	cout << "\nIMC = " << imc << endl << raspuns << endl;
	return 0;
}
*/

//varianta cu o functie cu tip cu parametrii
float IMC(float h, float g)
{
	return g / (h * h);
}

int main()
{
	float h, g;
	cout << "Inaltimea in metrii(cu zecimale): "; cin >> h;
	cout << "Greutatea in kg(intreg sau cu zecimale): "; cin >> g;
	float indice = IMC(h, g);
	cout << "\nIMC = " << indice << endl;
	cout << raspuns(indice) << endl;
	return 0;
}

string raspuns(float imc)
{
	string raspuns;
	if (imc < 18, 5)
		raspuns = "Persoana subponderala";
	else if (imc >= 18.5 && imc < 25)
		raspuns = "Persoana normoponderala";
	else if (imc >= 25 && imc < 30)
		raspuns = "Persoana supraponderala";
	else if (imc >= 30)
		raspuns = "Persoana obeza";
	else
		raspuns = "Nu stiu bro";
	return raspuns;
}

