#include <iostream>
using namespace std;
int main() {
	int m5, m2, m1, K, resto;

	cout << "Digite la cantidad de soles: "; cin >> K;

	m5 = (K/5);
	resto = K % 5;
	m2 = (resto / 2);
	m1 = resto % 2;
	cout << "Monedas de 5 soles: " << m5<<endl;
	cout << "Monedas de 2 soles: " << m2<<endl;
	cout << "Monedas de 1 sol: " << m1<<endl;

	return 0;
}