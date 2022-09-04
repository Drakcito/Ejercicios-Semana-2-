#include <iostream>
using namespace std;

int main() {
	int num_neumaticos;
	
	cout << "Digite el numero de neumaticos a comprar: ";
	cin >> num_neumaticos;
	
	((num_neumaticos < 3) && (num_neumaticos > 0)) && cout << "El monto total es: " << num_neumaticos * 145;
	((num_neumaticos >= 3) && (num_neumaticos <= 5)) && cout << "El monto total es: " << num_neumaticos * 138;
	(num_neumaticos >5) && cout << "El monto total es: " << num_neumaticos * 135;
	
	return 0;
}
