#include <iostream>

int main() {
	char inputCharacter;

	std::cin >> inputCharacter;

	if ((inputCharacter >= 'A' && inputCharacter <= 'Z') || (inputCharacter >= 'a' && inputCharacter <= 'z')) {
		switch (inputCharacter) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'Y':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y':
				std::cout << "Entered letter is a vowel.\n";
				break;
			default:
				std::cout << "Entered letter is not a vowel.\n";
				break;
		}
	} else {
		std::cout << "The symbol is not part of the latin alphabet." << std::endl;
	}

	return 0;
}