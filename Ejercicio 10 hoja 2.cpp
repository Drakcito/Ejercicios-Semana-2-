#include <iostream>
using namespace std;
int main(){
	int tiempo, tipo=0, puntaje=0;
	char estudios;
	
	cout<<"Ingrese la cantidad años labora: ";cin>>tiempo;
	cout<<"Ingrese tipo de estudios[P, S, U, G]: "; cin>> estudios;
	estudios = toupper(estudios);
	
	(tiempo<5&&tiempo>=1)&& (estudios =='P')&& (puntaje=5+5);
	(tiempo>=5)&& (estudios =='P')&& (puntaje=10+5);
	(tiempo<5&&tiempo>=1)&& (estudios =='S')&& (puntaje=5+10);
	(tiempo>=5)&& (estudios =='S')&& (puntaje=10+10);
	(tiempo<5&&tiempo>=1)&& (estudios =='U')&& (puntaje=5+20);
	(tiempo>=5)&& (estudios =='U')&& (puntaje=10+20);
	(tiempo<5&&tiempo>=1)&& (estudios =='G')&& (puntaje=5+30);
	(tiempo>=5)&& (estudios =='G')&& (puntaje=10+30);
	
	cout<<"\nPuntaje obtenido: "<<puntaje;
	
	return 0;	
}
