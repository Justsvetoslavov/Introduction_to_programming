#include <iostream>

int main() {
	char symbol;
	std::cin >> symbol;

	if (symbol >= 'A' && symbol <= 'Z') {
		std::cout << (symbol += 32) << std::endl;
	} else if (symbol >= 'a' && symbol <= 'z') {
		std::cout << (symbol -= 32) << std::endl;
	} else {
		std::cout << "Invalid character" << std::endl;
	}

	return 0;
}
