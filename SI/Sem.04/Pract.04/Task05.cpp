#include <iostream>

void print(char S, int N) {
	for (int i = 0; i < N; i++) {
		std::cout << S << std::endl;
	}
}
int main() {
	std::cout << "S:" << std::endl;
	char S;
	std::cin >> S;
	std::cout << "N:" << std::endl;
	int N;
	std::cin >> N;
	print(S, N);
}