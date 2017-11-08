#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int find_bananas;
	string filename;
	
	cout << "Inserta el nombre de tu archivo de texto, no olvides el .txt: "<< endl;
	cin >> filename;
	
	ifstream archivo(filename.c_str());
	
	cout << "Hay << << 'bananas' en este archivo" <<endl;
	archivo.close();
	
	return 0;
}