#include <iostream>
using namespace std;
int main() {
	char equilatero, isosceles, escaleno;
	int lado1, lado2, lado3;

	cout << "Ingrese los 3 lados: "; cin >> lado1 >> lado2 >> lado3;


	(lado1 == lado2 && lado1 == lado3 && lado2 == lado3) && cout << "Equilatero: V" << endl;
	(lado1 != lado2 && lado1 != lado3 && lado2 != lado3) && cout << "Equilatero: F" << endl;

	(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) && cout << "Isosceles: V " << endl;
	(lado1 != lado2 && lado1 != lado3 && lado2 != lado3) && cout << "Isosceles: F" << endl;

	(lado1 != lado2 && lado1 != lado3 && lado2 != lado3) && cout << "Escaleno: V" << endl;
	(lado1 == lado2 && lado1 == lado3 && lado2 == lado3) && cout << "Escaleno: F" << endl;

	return 0;
}
