#include <iostream>
using namespace std;

int main() {

	char symbol;
	cout << "Enter a symbol: ";
	cin >> symbol;


	if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122)) {
		switch (symbol) {

		case 'a': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'A': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'e': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'E': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'o': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'O': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'u': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'U': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'i': cout << "That is a part of the latin alphabet and also a vowel."; break;
		case 'I': cout << "That is a part of the latin alphabet and also a vowel."; break;

		default:
			cout << "That is a part of the latin alphabet. ";
			break;
		}

	}
	else {
		cout << "That is not a part of the latin alphabet. ";
	}
	return 0;
}