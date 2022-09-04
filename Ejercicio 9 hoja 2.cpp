#include <iostream>
using namespace std;
int main() {
	long long codigo;
	int dia, mes, anno, tipo_producto, perecible;
	int residuo1, residuo2, residuo3, resultado_perecible;
	cout << "Ingrese el codigo evaluar: ";
	cin >> codigo;
//DDMMAAAATTPP
	dia = (codigo/10000000000);
	residuo1 = (codigo % 10000000000);

	mes = (residuo1/ 100000000);
	residuo2 = (residuo1% 100000000);
	
	anno = (residuo2 / 10000);
	residuo3=(residuo2 % 10000);
	
	tipo_producto = (residuo3 / 100);
	perecible = (residuo3 % 100);
	
	cout << "Dia: " << dia << endl;
	cout << "Mes: " << mes << endl;
	cout << "Anio: " << anno << endl;
	cout << "Tipo producto: " << char(tipo_producto) << endl;
	
	(perecible == 00) && cout << "Es perecible: SI\n";
	(perecible > 00) && cout << "Es perecible: NO\n";

	return 0;
}
