#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string filename;
	
	cout << "Inserta el nombre de tu archivo de texto, no olvides el .txt: "<< endl;
	cin >> filename;
	
	ifstream archivo(filename.c_str());
	string linea;
	int posicion;
	int cuentaBananas = 0;
	string ban= "banana";
	while(getline(archivo,linea)){
		// primero, cambiar a puro miniscula la linea
		transform(linea.begin(), linea.end(), linea. begin(),::tolower);
		posicion=linea.find(ban);
		while (posicion !=-1){
			cout<<" Encontre una banana en la posicion: "<<posicion<<endl;
			cuentaBananas++;
			posicion=linea.find(ban,posicion + 1);
		}
		
		
		//buscar un banana en la linea.
		
		
	

		// ciclo de mientras encontramos banana, cuentala y buscar el siguente en la misma linea
	}
	
	// imprimir la cuenta de bananas.
	
	cout << "Hay " <<cuentaBananas;
	cout <<" 'bananas' en este archivo" <<endl;
	archivo.close();
	
	return 0;
}