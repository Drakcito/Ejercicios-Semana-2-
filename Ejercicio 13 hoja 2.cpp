#include <iostream>
using namespace std;
int main() {
	long long code;
	int nombre,paterno,materno,hora,minutos,segundos;

	cout << "Ingrese el codigo evaluar: ";//NN PP AA HH MM SS
	cin >> code;

	nombre = (code/10000000000);
	code = (code % 10000000000);

	paterno = (code/ 100000000);
	code = (code% 100000000);
	
    materno = (code / 1000000);
	code=(code % 1000000);
	
	hora = (code / 10000);
	code=(code % 10000);
	
	minutos = (code / 100);
    segundos=code%100;
	
	cout << "Hora de entrada: " << hora << endl;
	cout << "Minuto de entrada: " << minutos << endl;
	cout << "Segundos de entrada: " << segundos << endl;
	cout << "Su nombre empieza con la letra: " << char(nombre) << endl;
	cout << "Su apellido paterno inicia con la letra: " << char(paterno) << endl;
	cout << "Su apellido materno inicia con la letra: " << char(materno) << endl;

	(hora >= 9) && cout << "¿Llegó tarde? V\n";
	(hora < 9) && cout << "¿Llegó tarde? F\n";

	return 0;
}
