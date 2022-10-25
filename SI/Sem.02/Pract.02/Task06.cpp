#include <iostream>

int main() {
	double a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0;

	std::cout << "Enter value for a: ";
	std::cin >> a;
	std::cout << "Enter value for b: ";
	std::cin >> b;
	std::cout << "Enter value for c: ";
	std::cin >> c;

	D = b * b - 4 * a * c;

	if (D < 0) {
		std::cout << "There are no real solutions.\n";
	}
	else if (D == 0) {
		x1 = (-b) / (2 * a);

		std::cout << "x = " << x1 << std::endl;
	}
	else {
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);

		std::cout << "x1 = " << x1 << std::endl << "x2 = " << x2 << std::endl;
	}

	return 0;
}