#include <iostream>

int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	std::cin >> a >> b >> c >> d >> e;

	for (int i = -100; i <= 100; i++) {
		if (a * i * i * i * i + b * i * i * i + c * i * i + d * i  + e >= 0) {
			std::cout << i << " ";
		}
	}

	return 0;
}