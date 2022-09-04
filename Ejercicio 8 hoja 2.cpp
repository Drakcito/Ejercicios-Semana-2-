#include <iostream>

using namespace std;

int main() {

    double cantidad_litros, pago = 20 ;
    cout << "Ingrese la cantidad de litros consumidos: ";
    cin >> cantidad_litros;
    
    (cantidad_litros >= 51) && (pago = pago+(cantidad_litros - 100) * 2);
    (cantidad_litros > 200) && (pago = pago+(cantidad_litros - 200) * 3.5);
    
    cout << "Pago correspondiente: S/" << pago;

    return 0;
}
