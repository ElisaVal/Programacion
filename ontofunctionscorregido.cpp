#include <iostream>
using namespace std;


int misuma(int a, int b){
	return a + b;
}
int miresta(int a, int b){
	return a - b;
}
int mimultiplicacion(int a , int b){
	return a * b; 
}
int midivision (int a, int b){
	return a/b;
}
int miresiduo (int a, int b){
	return a%b;
}


int main() {
	int num1, num2;
	cout<<"inserta el primer numero: ";
	cin>>num1;
	cout<<"inserta el segundo numero: ";
	cin>>num2;

	cout<<"la suma es: ";
	cout << misuma (num1,num2) << endl ;

	cout<<"la resta es: ";
	cout<< miresta (num1, num2) << endl;

	cout<<"la multiplicacion es: ";
	cout<< mimultiplicacion (num1, num2) << endl;

	cout<<"la divison es: ";
	cout<< midivision (num1, num2) << endl;

	cout<<"el residuo es: ";
	cout<< miresiduo (num1, num2) << endl;
	
	return 0;
}