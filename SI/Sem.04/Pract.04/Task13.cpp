#include <iostream>
#include <cmath>

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

void printAllPrimesTo(int n) {
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}

void sumOfPrimeNumbers(int n) {
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			if (isPrime(i) && isPrime(j) && i+j==n) {
				std::cout << i << " + " << j << " = " << n << std::endl;
				return;
			}
		}
	}
	std::cout << "cannot be represented as sum of two prime numbers." << std::endl;
}
int main() {
	std::cout << "enter a number:" << std::endl;
	int n;
	std::cin >> n;
	std::cout << "is n prime: " << std::boolalpha << isPrime(n) << std::endl;
	std::cout << "all primes to " << n << ": " << std::endl;
	printAllPrimesTo(n);
	std::cout << "representation as sum of two prime numbers:" << std::endl;
	sumOfPrimeNumbers(n);
}