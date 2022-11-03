#include <iostream>

bool isPrime(int n) {
	if (n == 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void factorise(int n) {
	if (isPrime(n)) {
		std::cout << "number is prime." << std::endl;
		return;
	}
	std::cout << n << " = ";
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			std::cout << i;
			if (!isPrime(n)) {
				std::cout << ".";
			}
			n /= i;
			i = 1;
		}
	}
}

int main() {
	std::cout << "enter number: " << std::endl;
	int n;
	std::cin >> n;
	factorise(n);
}