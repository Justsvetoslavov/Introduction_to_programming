#include <iostream>

int main() {
	int n = 0;

	std::cin >> n;

	for (int i = 1; i < n; i++) {
		std::cout << "x = " << i << "y = " << n - i << std::endl;
	}

	return 0;
}