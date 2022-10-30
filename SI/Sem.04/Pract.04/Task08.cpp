#include <iostream>
using namespace std;

int myPow(int number, unsigned int power) {
	if (power < 0) {
		return -1;
	}

	int result = 1;
	for (int i = 1; i <= power; i++) {
		result *= number;
	}
	return result;
}

int main() {

	int number;
	cin >> number;
	cout << myPow(number, 3);
	ret