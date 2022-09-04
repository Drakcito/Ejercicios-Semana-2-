#include <iostream>
using namespace std;
int main() {
	int edad, sueldo,total;
	char nacio;
	cout << "Ingrese la edad del jugador: ";
	cin >> edad;
	cout << "Ingrese la nacionalidad del jugador (E: Extranjero; N: Nacional): ";
	cin >> nacio;
	nacio=toupper(nacio);

	(nacio == 'E') && (sueldo = 3000);
	(nacio == 'N') && (sueldo = 2500);

	(edad >= 15 && edad <= 20) && (total = sueldo + 1400);
	(edad >= 21 && edad <= 25) && (total = sueldo + 1500);
	(edad >= 26 && edad <= 30) && (total = sueldo + 1200);
	
	(edad > 30) && (total = sueldo + 800);

	cout << "El sueldo de el jugador es: " << total;

	return 0;
}
