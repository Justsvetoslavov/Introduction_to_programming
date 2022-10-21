#include <iostream>

int main() {
	int n = 0;
	bool isMultipleOfTwo = true;

	std::cin >> n;

	while (n / 2 != 0) {
		if (n % 2 != 0) {
			isMultipleOfTwo = false;
			break;
		}

		n /= 2;
	}

	std::cout << std::boolalpha << isMultipleOfTwo << std::endl;

	return 0;
}