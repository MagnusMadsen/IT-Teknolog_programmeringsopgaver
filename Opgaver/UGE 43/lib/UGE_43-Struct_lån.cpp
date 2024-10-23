#include <iostream>
#include <string>

struct person
{
	int tlf;
	std::string navn;
	std::string vejnavn;
	double formue;
	double indkomst;
};

float renteBeregning (struct person kunde) {
	if (kunde.formue < 100000) 
	{
		float rente = kunde.formue*0.05;
		return rente;
	}
	else 
	{
		float rente = kunde.formue*0.1;
		return rente;
	}
}

struct person kundeIndrulning () {
	person w;
	std::cout << "Indtast dit telefonnummer." << std::endl;
	std::cin >> w.tlf; 
	std::cout << "Indtast dit navn." << std::endl; 
	std::cin >> w.navn;
	std::cout << "Indtast din formue" << std::endl;
	std::cin >> w.formue;
	std::cout << "Personen " << w.navn << std::endl;
	std::cout << "har tlf nr " << w.tlf << std::endl;
	return w;
}

int main () {
	person n = kundeIndrulning();
	float r = renteBeregning(n);
	std::cout << r << std::endl;
}
