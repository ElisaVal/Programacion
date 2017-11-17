#include <iostream>
using namespace std;

int factorial(int n){
   if(n == 0){
	   return 1;
   } else {
       return n * factorial(n-1);
   }
}

int main() {
	double precision;
		
	cout<< "Inserta la precision que quieres que tenga 'e': ";
	cin >> precision;
	cout.precision(14);
	double e = 0;
	double previo;
	int n = 0;
	do{
		cout << "ahora e es " <<  e << endl;
		previo = e;
		e = e + 1.0/factorial(n);
		n = n + 1;
	} while(e - previo > precision);
	
	cout<< "El valor de tu 'e' es: " << e << endl;
	
	return 0;
}