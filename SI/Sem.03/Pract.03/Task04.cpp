#include <iostream>

int main() {
	int n = 0, m = 0;

	std::cin >> n >> m;

	if (n > 0 && m > 0) {
		for (int i = 1; i <= n * m; i++) {
			std::cout << i << " ";
			if (i % m == 0) std::cout << std::endl;
		}
	} else {
		std::cout << "Invalid input." << std::endl;
	}
	return 0;
}