#include <iostream>
#include <cmath>

bool isPrime(int number)
{
	if (number <= 1) {
		return false;
	}
	
	if (number == 2) {
		return true;
	}
	
	if (number % 2 == 0) {
		return false;
	}
	
	int sqrtNum = sqrt(number);
	for (int i = 3; i <= sqrtNum; i += 2) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

void primeFactorization(int number)
{
	std::cout << "Prime factorization of " << number << ": ";
	
	bool first = true;
	
	for (int i = 2; i <= number; i++) {
		while (number % i == 0 && isPrime(i)) {
			if (!first) {
				std::cout << ".";
			}
			std::cout << i;
			first = false;
			number /= i;
		}
	}
	
	std::cout << std::endl;
}

int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	
	primeFactorization(number);
	
	return 0;
}
