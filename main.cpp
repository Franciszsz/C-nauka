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

