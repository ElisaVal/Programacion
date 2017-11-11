#include <iostream>
using namespace std;

 int factorial (int n)
 {
	 if(n > 1 ){
		 return n * factorial(n - 1);
	 } else {
		return 1;
	 }
 }	

int main()
{
	int n;
	cout << "Inserta un numero positivo: ";
	cin >> n;
	cout << "Factor de " << n << " = " << factorial (n) << endl;
	return 0;
}
 
