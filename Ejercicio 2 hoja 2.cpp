#include <iostream>
#include<math.h>
int main() {
	double x1, y1, x2, y2;
	double pendiente, angulo, distancia;
	double atan(double x);

	std:: cout << "Ingrese las coordenadas: ";
	std:: cout << "\nX1: ";
	std:: cin >> x1;
	std:: cout << "Y1: ";
	std:: cin >> y1;
	std:: cout << "X2: ";
	std:: cin >> x2;
	std:: cout << "Y2: ";
	std:: cin >> y2;

	distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	pendiente = (y2 - y1) / (x2 - x1);
	angulo = atan(pendiente);

	std:: cout << "\nLa distancia es: " << distancia;
	std:: cout << "\nEl angulo mide: " << angulo;

	return 0;
}