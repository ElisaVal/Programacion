#include <iostream>
using namespace std;

int main() {
	int f, c;
	cout<<"Temperature in Farenheit ";
	cin>> f;
	c=5*(f-32)/9;

	cout << "The temperature in celsius:" << c << endl;

	if(c < 100){
		cout<< "Water does not boil at this temperature (under typical conditions)";
	} else {
		cout<<"Water boils at this temperature (under typical conditions)";
	}
	
	return 0;
}