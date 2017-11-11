#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string texto;
	int charCount, lineCount;

	cout << "Inserta el nombre de tu archivo no olvides el .txt "<< endl;
	cin >> texto;
	
	ifstream archivo(texto.c_str());
	charCount=0;
	lineCount=0;
	
	if ( archivo.is_open())
	{
		while ( getline ( archivo, texto))
		{
			lineCount++;
			charCount += texto.length();
		}
	}
	 
	cout << "El numero de caracteres es: "<<charCount<<endl;
	cout << "El numero de lineas son: " <<lineCount<<endl;
	
	archivo.close();
	
	
	return 0;
}