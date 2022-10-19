#include <iostream>

int main() {
	int n = 1;
	std::cin >> n;
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				std::cout << j;
			}
			std::cout << std::endl;
		}
	}

}