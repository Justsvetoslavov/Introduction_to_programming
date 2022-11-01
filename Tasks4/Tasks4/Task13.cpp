#include <iostream>

bool isPrime(int num) {

	int sqrtNum = sqrt(num);
	for (int i = 2; i <= sqrtNum; i++) {

		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

void allPrimeNumbers(int num) {

	for (int i = 1; i <= num; i++) {

		if (isPrime(i)) {
			std::cout << i << std::endl;
		}
	}
}

bool isSumOfPrime(int num) {

	for (int i = 1; i <= num/2; i++) {

		if (isPrime(i) && isPrime(num - i)) {
			return true;
		}
	}
	return false;
}

int main() {

	int num;
	std::cout << num << std::endl;

}