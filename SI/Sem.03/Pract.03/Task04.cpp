#include <iostream>

int main() {
	int n = 0, m = 0, product = 0;

	std::cin >> n >> m;

	product = n * m;

	for (int i = 1; i <= product; i++) {
		std::cout << i << " ";
		if (i % m == 0) std::cout << std::endl;
	}

	return 0;
}