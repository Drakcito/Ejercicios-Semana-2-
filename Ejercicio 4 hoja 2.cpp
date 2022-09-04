#include <iostream>
using namespace std;
int main() {
	int cm, iextra;
	cout << "Ingrese centimetros: "; cin >> cm;
	cout << "Ingrese Ingredientes extras: "; cin >> iextra;
	cout << "El costo a pagar es: " << (cm * 1.5) + (iextra * 2.5);

	return 0;
}