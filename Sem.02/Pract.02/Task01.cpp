#include <iostream>

int main() {
	int year = 0;

	std::cout << "Enter a year: ";
	std::cin >> year;

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		std::cout << "Entered year is leap.\n";
	} else {
		std::cout << "Entered year is not leap.\n";
	}

	return 0;
}