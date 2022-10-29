#include <iostream>

int main() {
	double sideA, sideB, sideC;

	std::cout << "Enter value for side a: ";
	std::cin >> sideA;
	std::cout << "Enter value for side b: ";
	std::cin >> sideB;
	std::cout << "Enter value for side c: ";
	std::cin >> sideC;

	if ((sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA)) {
		std::cout << "The triangle is valid.\n";
	} else {
		std::cout << "The triangle is invalid.\n";
	}

	return 0;
}