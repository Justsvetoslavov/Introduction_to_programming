#include <iostream>
using namespace std;

int main() {

	int firstNumber, secondNumber, condition;
	cout << "Enter a number: ";
	cin >> firstNumber;
	cout << "Enter a second number: ";
	cin >> secondNumber;

	int condition = (firstNumber > secondNumber) ? firstNumber : secondNumber;
	cout << "The bigger number is: " << condition;

	condition = (firstNumber != secondNumber) & (firstNumber
	condition ? (firstNumber > secondNumber) : (firstNumber < secondNumber);

	if ((firstNumber > secondNumber) && (firstNumber != secondNumber)) {

		cout << firstNumber 
			<< " is bigger than " 
			<< secondNumber;
	}
	else if ((firstNumber < secondNumber) && (firstNumber != secondNumber)) {

		cout << secondNumber 
			<< " is bigger than " 
			<< firstNumber;
	}
	else {

		cout << "Error. " << endl;
	}
	return 0; }
