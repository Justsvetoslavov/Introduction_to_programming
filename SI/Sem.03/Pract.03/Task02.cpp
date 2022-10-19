#include <iostream>

int main() {
	int n = 1;
	std::cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = n - 1; j > 0; j--) {
			if (i + j == n) {
				std::cout << "x = " << i << " y = " << j << std::endl;
			}
		}
	}

}