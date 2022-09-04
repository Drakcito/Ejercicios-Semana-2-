#include <iostream>
using namespace std;
int main() {
	char zona, socio;
	int entradas;
	double d1, d2, precio;
	cout << "Ingrese la zona elegida ([V]ip [P]latea Popular[E]): "; cin >> zona;
	cout << "Ingrese el numero de entradas: "; 	cin >> entradas;
	cout << "Es socio de la U (S: si; N: no): "; cin >> socio;
	zona = toupper(zona);
	socio = toupper(socio);

	(zona == 'V') && (precio = 350);
	(zona == 'P') && (precio = 130);
	(zona == 'E') && (precio = 50);

	(entradas >= 3) && (entradas <= 6) && (socio == 'S') && (d1 = ((precio * entradas) * 0.05)) && (d2 = ((precio * entradas) - d1) * 0.08);
	(entradas >= 3) && (entradas <= 6) && (socio == 'N') && (d1 = ((precio * entradas) * 0.05)) && (d2 = ((precio * entradas) - d1) * 0);

	(entradas >= 7) && (entradas <= 9) && (socio == 'S') && (d1 = ((precio * entradas) * 0.075)) && (d2 = ((precio * entradas) - d1) * 0.08);
	(entradas >= 7) && (entradas <= 9) && (socio == 'N') && (d1 = ((precio * entradas) * 0.075)) && (d2 = ((precio * entradas) - d1) * 0);

	(entradas > 9) && (socio == 'S') && (d1 = ((precio * entradas) * 0.10)) && (d2 = ((precio * entradas) - d1) * 0.08);
	(entradas > 9) && (socio == 'N') && (d1 = ((precio * entradas) * 0.10)) && (d2 = ((precio * entradas) - d1) * 0);

	cout << "\nEl monto a pagar es: " << ((precio * entradas - d1) - d2);

	return 0;
}
