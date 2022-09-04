#include <iostream>
using namespace std;
int main() {
	int horas, horas_extra=0, salario=0;
	cout << "Ingrese las horas trabajadas: ";
	cin >> horas;

	(horas > 40) && (horas_extra = horas - 40) && (salario = (40 * 16) + (horas_extra * 20));
	(horas < 40) && (salario = horas*16);

	cout << "El salario semanal es: $" << salario;
	return 0;
}