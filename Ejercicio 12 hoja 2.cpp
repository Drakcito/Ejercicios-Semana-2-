#include <iostream>
using namespace std;
int main() {
	double tipopizza,descuento=0, precio, total=0;

	cout << "Tipo de pizza[1,2,3]: ";
	cin >> tipopizza;
	cout << "Precio: ";
    cin >> precio;

	(tipopizza == 1) && (descuento = precio * 0.10);
	(tipopizza == 2) && (descuento = precio * 0.15);
	(tipopizza == 3) && (descuento = precio * 0.20);
	
	cout << "Total a pagar: " << precio-descuento;
	
	return 0;
}
