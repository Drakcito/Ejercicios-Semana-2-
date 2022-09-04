#include <iostream>
using namespace std;
int main() {
	char modelo, color;
	int edad;
	double incremento, precio;
	cout << "Ingrese el modelo del auto: ";
	cin >> modelo;
	cout << "Ingrese el color del auto: ";
	cin >> color;
	cout << "Ingrese la edad del conductor: ";
	cin >> edad;
	modelo = toupper(modelo);
	color = toupper(color);

	(modelo == 'A') && (color == 'B') && (precio = 240.50);
	(modelo == 'A') && (color == 'M') && (precio = 330.00);
	(modelo == 'A') && (color == 'O') && (precio = 270.50);
	(modelo == 'B') && (color == 'B') && (precio = 300.00);
	(modelo == 'B') && (color == 'M') && (precio = 360.50);
	(modelo == 'B') && (color == 'O') && (precio = 330.00);

	(edad < 31) && (incremento = 0.25 * precio);
	((edad >= 31) && (edad <= 65)) && (incremento = 0 * precio);
	(edad > 65) && (incremento = 0.1 * precio);
	cout << "El total a pagar por seguro de auto es: " << precio + incremento;

	return 0;
}