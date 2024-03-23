#include <string>
#include <iostream>
#include <conio.h>
using namespace std;


/*APLICATIA 1
Să se definească o clasă numită Examen având toți membrii publici, și anume un câmp de tip string (disciplina) și
2 câmpuri de tip int (test1, test2) și o funcție tot publică numita medie ce returnează valoarea medie a celor două câmpuri întregi (atenție la tipul funcției).


a)	Să se declare un obiect al acestei clase numit x utilizând constructorul implicit pentru care să se citească de la tastatură toți membrii de date și
să se afișeze cu ajutorul funcției publice medie valoarea medie dintre cele două câmpuri întregi.

b)	În programul principal să se mai declare o instanță a respectivei clase, numită y, dar utilizând alocarea dinamică a memoriei, deci prin pointer, și
să se citească și pentru acesta câmpul de tip text și cele două câmpuri întregi, după care să se afișeze mesajul:
Obiectul cu denumirea (se completează cu câmpul text) are media (cel dat de funcția medie).
*/

class Examen
{
public:
	string disciplina;
	int test1, test2;

	float medie()
	{
		return (test1 + test2) / 2.0;
	}
};

int main()
{
	//a)
	Examen x;
	cout << "Introduceti desciplina: "; cin >> x.disciplina;
	cout << "Introduceti nota testului 1: "; cin >> x.test1;
	cout << "Introduceti nota testului 2: "; cin >> x.test2;
	cout << "Media celor doua teste este: " << x.medie() << endl;

	return 0;


	//b)
	Examen* y = new Examen();
	cout << "Introduceti desciplina: "; cin >> y->disciplina;
	cout << "Introduceti nota testului 1: "; cin >> y->test1;
	cout << "Introduceti nota testului 2: "; cin >> y->test2;
	cout << "Media celor doua teste este: " << y->medie() << endl;

	return 0;
}


/*APLICATIA 3
Să se definească o clasă numită CClass având următorii membrii privați, și anume un câmp de tip int numit cod și două câmpuri de tip float numite nota1 si nota2.
Clasa are și o funcție publică numită medie care returnează media aritmetică a lui nota1 și nota2 și o funcție publică numită set_values cu un parametru întreg și
doi parametri de tip float care setează câmpurile private cod și nota1 și nota2 cu valorile transmise ca parametri. De asemenea clasa mai are și o funcție publică get_cod care
returneaza valoarea câmpului privat cod. Nu există niciun constructor definit explicit.

a)	În programul principal să se declare un obiect de clasă CClass pentru care să se citească de la tastatură valorile celor 3 membri privați, cod, nota1 și nota2 și să se afișeze,
utilizând funcția publică medie, mesajul:
Obiectul cu codul (se completează cu valoare câmpului cod) are media (se completeaza cu valoarea data de functia medie).

b)	În programul principal să se mai declare o instanță a respectivei clase, numită y, dar utilizând alocarea dinamică a memoriei (deci prin pointer), și
să se facă același lucru ca la punctul a) citind un alt cod și alte 2 valori pentru nota1 și nota 2 de la tastatură.

*/


class CClass
{
	int cod;
	float nota1, nota2;

public:
	float medie()
	{
		return (nota1 + nota2) / 2.0;
	}

	float set_values(int c, float n1, float n2)
	{
		c = cod;
		n1 = nota1;
		n2 = nota2;
	}

	float get_cod()
	{
		return cod;
	}
};

int main()
{
	//a)
	CClass x;
	int a;
	float b, c;
	cout << "Introduceti codul: "; cin >> a;
	cout << "Introduceti nota 1: "; cin >> b;
	cout << "Introduceti nota 2: "; cin >> c;
	x.set_values(a, b, c);
	cout << "Obiectul cu codul " << x.get_cod() << " are media " << x.medie() << "." << endl;
}
