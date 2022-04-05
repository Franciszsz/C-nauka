#pragma once
#include <iostream>
#include <string>

using namespace std;

class pies
{
public:
	pies();
	pies(string imie, double waga);
	void daj_glos();
private:
	string imie;
	double waga;
};

//pomocy.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class pies
{
public:
	pies();
	pies(string imie, double waga);
	void daj_glos();
private:
	string imie;
	double waga;
};
//pomocy.cpp

#include "pomocy.h"
#include <iostream>
#include <string>

using namespace std;

pies::pies() :imie("Nieznany"), waga(0)
{

}
pies::pies(string aimie, double awaga) : imie( aimie), waga(awaga)
{

}
void pies::daj_glos()
{
	cout << imie << ", waga = " << waga << endl;
}
