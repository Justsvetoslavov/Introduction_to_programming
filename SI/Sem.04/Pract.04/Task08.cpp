#include <iostream>
using namespace std;

int pow(int number, unsigned int power) {
	if (power <= 0) {
		return -1;
	}
	int result = 1;
	for (int i = 0; i <= power; i++) {
		result *= number;
	}
	return result;
}

int main() {

	int number;
	cin >> number;
	cout << pow(10);
	return 0;
}