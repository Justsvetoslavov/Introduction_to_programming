#include <iostream>

int main() {
	int n = 0;

	std::cin >> n;

	if (n > 3) {
		int num1 = 1, num2 = 1;

		std::cout << num1 << " " << num2 << " ";

		while (num1 + num2 <= n) {
			std::cout << num1 + num2 << " ";
			const int temp = num1;
			num1 = num2;
			num2 = num1 + temp;
		}
	} else {
		std::cout << "Invalid input." << std::endl;
	}

	return 0;
}