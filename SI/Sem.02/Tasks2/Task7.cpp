#include <iostream>
using namespace std;

int main() {

	char symbol;
	cout << "Enter a symbol: ";
	cin >> symbol;

	if (symbol >= 65 && symbol <= 90) {

		symbol = symbol + 32;
		cout << "Lower symbol: " << symbol << endl;
	}
	else if (symbol >= 97 && symbol <= 122) {

		symbol = symbol - 32;
		cout << "Upper symbol: " << symbol << endl;
	}
	else {

		cout << "Invalid character" << endl;
	}
	return 0;
}