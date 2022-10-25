#include <iostream>
int main() {
	int N = 1, a = 3, b = 4, c = 5;
	std::cout << "Input natural number N: " << std::endl;
	std::cin >> N;
	if (N > 0) {
		for (int i = 1; i <= N; i++) {
			if (i * a <= N && i * b <= N && i * c <= N) {
				std::cout << i * a << " " << i * b << " " << i * c << std::endl;
			}
		}
	}
	return 0;
}