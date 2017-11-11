#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float numbers[10];
	for (int i=0;i<10;i++) 
	{
		cout<<"Please insert a number: "<<endl;
		cin>> numbers[i];
	}
	float total, average, standard;

	total = 0.0;
	for (int i=0;i<10;i++) 
	{
		total = total + numbers[i];
	}
	average= total/10.0;

	standard = 0.0;
	for (int i=0;i<10;i++) 
	{
		standard = standard + (numbers[i]-average)*(numbers[i]-average);
	}
	standard = sqrt(standard);
	standard = standard / 10;
	
	
	cout<< "The total is: ";
	cout << total << endl;
	cout << "The average is: ";
	cout << average << endl;
	cout << "The standard is: ";
	cout << standard << endl;
	return 0;
}