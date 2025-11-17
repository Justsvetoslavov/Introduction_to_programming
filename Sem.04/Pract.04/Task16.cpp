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
