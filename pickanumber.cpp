#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int Dado, Adivinar;
	int counter = 0;
	srand(time(NULL));
	Dado= rand () % 100+1;
	
	cout<< "Please guess a number between 1 and 100" <<endl;
	cin>> Adivinar;
	counter = counter + 1;
	while (Dado!=Adivinar) {
		if (Adivinar > Dado){
			cout<<"Is too high, try again";
			cin>> Adivinar;
			counter=counter + 1;

		
		}
		else { 
			cout<<"is too low, try again";
			cin>> Adivinar;
			counter= counter +1;
		
		}
		
	}
		cout<<"You got it! The right answer is indeed." 
		<< endl;
		cout<< "The times that you guess are ";
		cout << counter ;

	return 0;
}