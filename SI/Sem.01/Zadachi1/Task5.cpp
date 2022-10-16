#include <iostream>
#include <math.h>
using namespace std;

int main() {

	// Zadacha 5

	double number1;
	double number2;
	cin >> number1;
	cin >> number2;
	bool oneBiggerthanTwo = number1 < number2;
	cout << boolalpha << oneBiggerthanTwo;

	return 0; 
}