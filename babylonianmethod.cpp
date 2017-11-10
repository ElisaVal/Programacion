#include <iostream>
using namespace std;


int main() {
	float numero, resultado, guess;
	
	cout <<"Inserta un numero: ";
	cin >> numero;
	
	guess = numero/2;
	resultado= (guess + numero/guess )/2;
	while (guess != resultado){
		cout << "La raiz cuadrada de " << numero << " es: " << resultado << endl;
		guess=resultado;
		resultado= (guess + numero/guess )/2;
	}
	
	cout << "Square root of " << numero << " is " << resultado << endl;	
	
	

	return 0;
}