#include <iostream>

void toBinary(int n) {
	int remainder = n % 2;
	if (n < 1) {
		return;
	}
	toBinary(n / 2);
	std::cout << remainder;
}

int main() {
	std::cout << "decimal number: " << std::endl;
	int n;
	std::cin >> n;
	std::cout << "Binary: " << std::endl;
	toBinary(n);
}