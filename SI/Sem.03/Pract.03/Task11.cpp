#include <iostream>

int main() {
	int a = 0, b = 0;
	bool isPrime = false;

	std::cin >> a >> b;

	if (a >= 0 && b >= 0) {
		if (a > b) {
			const int temp = a;
			a = b;
			b = temp;
		}

		for (int i = a; i <= b; i++) {
			if (i == 0 || i == 1) continue;

			isPrime = true;

			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					isPrime = false;
					break;
				}
			}

			if (isPrime) {
				std::cout << i << ", ";
			}
		}
	} else {
		std::cout << "Invalid input." << std::endl;
	}

	std::cout << std::endl;
	return 0;
}