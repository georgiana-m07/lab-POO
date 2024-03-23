//Clasa Cont :

#include <iostream>
#include <string>
using namespace std;

class Cont {
	string titular;
	string nrCont;
	double sold;

	void atribuireNrCont()
	{
		cout << "Dati nr cont: ";
		cin >> nrCont;
	}

public:
	//constructor explicit
	/*Cont(string nume, double soldInit)
	{
		titular = nume;
		sold = soldInit;
		atribuireNrCont();
	}
	*/

	//constructor implicit
	void set_values(string nume, double soldInit)
	{
		titular = nume;
		sold = soldInit;
		atribuireNrCont();
	}


	void depune(double suma)
	{
		sold += sold;
	}

	void extragere(double suma)
	{
		if (suma > sold) cout << "Sold insuficient!" << endl;
		else
			sold -= suma;
	}

	void afiseazaSold()
	{
		cout << "Soldul contului este: " << sold << endl;
	}
};

int main()
{
	//Cont c("Ionescu", 100000); //constructor explicit
	Cont c; //constructor implicit
	c.set_values("Ionescu", 100000); //constructor implicit
	c.extragere(2000);
	double s;
	cout << "Dati suma de depus: ";
	cin >> s;
	c.depune(s);
	c.afiseazaSold();
	system("pause");
	return 0;
}


//Aplicatia 2 din seminar cea cu Produse :

class Produse
{
	string denumire;
	float cantitate;
	float pret;

public: float valoare()
{
	return pret * cantitate;
}

	  Produse(string den)
	  {
		  denumire = den;
		  cout << "Dati pretul: "; cin >> pret;
		  cout << "Dati cantitatea: "; cin >> cantitate;
	  }

	  Produse() //b
	  {
		  denumire = "consola PS5";
		  pret = 5734.9;
		  cantitate = 2;
	  }
};

int main()
{
	string d;
	cout << "Dati denumirea produsului:"; cin >> d;
	Produse x(d);
	cout << "Valoarea produsului este: " << x.valoare() << endl;
	Produse y; //b
	cout << "Valoarea pentru al doilea obiect este: " << y.valoare() << endl; //b
	return 0;
}


