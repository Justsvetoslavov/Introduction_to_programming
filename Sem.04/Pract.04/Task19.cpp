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

bool canBeSumOfTwoPrimes(int number)
{
	if (number <= 2) {
		return false;
	}
	
	for (int i = 2; i <= number / 2; i++) {
		if (isPrime(i) && isPrime(number - i)) {
			std::cout << number << " = " << i << " + " << (number - i) << std::endl;
			return true;
		}
	}
	
	return false;
}

int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	
	if (canBeSumOfTwoPrimes(number)) {
		std::cout << "Yes, can be represented as sum of two primes." << std::endl;
	} else {
		std::cout << "No, cannot be represented as sum of two primes." << std::endl;
	}
	
	return 0;
}
