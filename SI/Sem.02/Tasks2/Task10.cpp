#include <iostream>
using namespace std;

int main() {

	double number1, number2; // op = operator
	char op;
	
	cout << "Enter two numbers: ";
	cin >> number1 >> number2;
	
	cout << "Enter an operator: ";
	cin >> op;
	if (number2 != 0) {

		switch (op) {

		case'+': cout << number1 + number2; break;
		case '-': cout << number1 - number2; break;
		case '*': cout << number1 * number2; break;
		case '/': cout << number1 / number2; break;

		default:
			cout << "Error"; break;
		}
	}
	else {
		cout << "Cannot divide by zero!" << endl;
	}
	
	return 0;
}