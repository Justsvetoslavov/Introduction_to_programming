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

void factorisation(int num) {

	for (int i = 2; i <= num; i++) {

		if (isPrime(i) && num % i == 0) {

			num /= i;
			std::cout << i << ".";
			i--;
		}
	}
}


int main() {

	int num;
	std::cin >> num;
	factorisation(num);

}