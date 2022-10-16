#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//Zadacha 14

	long creditCardNumber;
	cout << "Credit card number: ";
	cin >> creditCardNumber;

	cout << "XXXXXXXXXXXX" << creditCardNumber % 10000;

	return 0;
}