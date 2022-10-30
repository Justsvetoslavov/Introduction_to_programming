#include <iostream>
using namespace std;

bool checkPrime(int input) {
	for (int i = 2; i < input; i++) {
		if (input % i == 0) {
			return false;
		}
	}

	return true;
}

void exportPrimes(int number) {
	cout << "The primes are: " << endl;
	for (int i = 2; i < number; i++) {
		bool isPrime = checkPrime(i);
		if (isPrime) {
			cout << i << endl;
		}
	}
}

bool isSum(int numberToTest) {
	for (int i = 1; i <= numberToTest / 2; i++) {
		int firstNumber = i - 1;
		if (checkPrime(firstNumber) && checkPrime(i)) {
			return true;
		}
	}

	return false;
}

int main()
{
	int a;
	cin >> a;

	cout << isSum(a) << endl;
	exportPrimes(a);

	return 0;
}