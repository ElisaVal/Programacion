#include <iostream>
using namespace std;		

int main() {
	int numinferior, numsuperior, suma;
	cout<< "Calcular la suma de enteros en el rango que usted proporcione"<<endl;
	
	do{
		cout << "Inserte el numero inferior:"<<endl;
		cin >> numinferior;
		cout << "Inserte el numero superior:"<<endl;
		cin >> numsuperior;
		if (numinferior> numsuperior){
			cout << " El primer numero debe de ser mas bajo"<<endl;
		}
	} while(numinferior> numsuperior);
	
	
	suma=0;
	int x = numinferior;
	while (x<= numsuperior){
		suma = suma + x;
		x = x+1;
	}
	cout<< "La suma es:" << suma<< endl;
	return 0;
}