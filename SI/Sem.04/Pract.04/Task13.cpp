#include <iostream>
using namespace std;

bool checkPrime(int input) {
	bool result = true;
	for (int i = 2; i < input; i++) {
		if (input % i == 0) {
			result = false;
			return result;
		}
	}

	return result;
}

void exportPrimes(int number) {
	for (int lower = 1; lower < number; lower++) {
		bool isPrime = checkPrime(lower);
		if (isPrime) {
			cout << lower << endl;
		}
	}

	return;
}

bool findSum(int a) {
	bool result = false;
	for (int i = 1; i <= a / 2; i++) {
		int firstNumber = i - 1;
		if (checkPrime(firstNumber) && checkPrime(i)) {
			result = true;
			break;
		}
	}

	return result;
}

int main()
{

	int a;
	cin >> a;

	cout << findSum(a);

	return 0;

}