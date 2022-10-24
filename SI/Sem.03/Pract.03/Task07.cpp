#include <iostream>

int main() {
	int n = 0;

	std::cin >> n;

	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = j; k < n; k++) {
				if (i * i + j * j == k * k) {
					std::cout << i << " " << j << " " << k << std::endl;
				}
			}
		}
	}

	return 0;
}