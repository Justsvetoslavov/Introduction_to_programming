#include <iostream>
using namespace std;

int main() {

	int a,b,c,d,num, number1, number2;
	cout << "Enter a 4-digit number: ";
	cin >> num;

	a = num / 1000;
	b = (num / 100) % 10;
	c = (num / 10) % 10;
	d = num % 10;

	number1 = a * 10 + d;
	number2 = b * 10 + c;
	if (number1 > number2) {

		cout << "greater (" << number1 << " > " << number2 << ")" << endl;
	}
	else if (number1 < number2) {

		cout << "less (" << number1 << " < " << number2 << ")" << endl;
	}
	else if (number1 == number2) {

		cout << "equal (" << number1 << " = " << number2 << ")" << endl;
	}
	
	return 0;
}