#include <iostream>
using namespace std;
int main() {
	double x, y;
	
	cout << "Ingrese la coordenada X: "; 
	cin >> x;
	cout << "Ingrese la coordenada Y: ";
	cin >> y;
	
	((x == 0) && (y == 0)) && cout << "El punto se encuentra en el punto de origen";
	((x > 0) && (y > 0)) && cout << "El punto se encuentra en el primer cuadrante";
	((x < 0) && (y > 0)) && cout << "El punto se encuentra en el segundo cuadrante";
	((x < 0) && (y < 0)) && cout << "El punto se encuentra en el tercer cuadrante";
	((x > 0) && (y < 0)) && cout << "El punto se encuentra en el cuarto cuadrante";

	return 0;
}
