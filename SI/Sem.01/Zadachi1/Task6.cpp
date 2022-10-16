#include <iostream>
#include <math.h>
using namespace std;

int main() {

	// Zadacha 6

	cout << "Divided: ";
	int firstNumber;
	cin >> firstNumber;
	cout << "Divisor: ";
	int secondNumber;
	cin >> secondNumber;

	double division = firstNumber / secondNumber;
	double modulus = firstNumber % secondNumber;

	cout << "The quotient of the division is: " << division << endl;
	cout << "The remainder of the division is :" << modulus << endl;

	return 0;
}
