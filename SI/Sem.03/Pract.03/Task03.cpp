#include <iostream>

int main() {
	int n = 0, nSquared = 0, nReverseSquared = 0;

	std::cin >> n;

	nSquared = n * n;

	while (nSquared != 0) {
		nReverseSquared = nReverseSquared * 10 + nSquared % 10;
		nSquared /= 10;
	}

	std::cout << nReverseSquared;

	return 0;
}