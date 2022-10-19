#include <iostream>

int main() {
	char input;

	std::cin >> input;

	if (input >= 'A' && input <= 'Z') {
		std::cout << char(int(input) + 32) << std::endl;
	}
	else if (input >= 'a' && input <= 'z') {
		std::cout << char(int(input) - 32) << std::endl;
	}
	else {
		std::cout << "Invalid character" << std::endl;
	}

	return 0;
}