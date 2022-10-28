#include <iostream>
using namespace std;


long long toBinary(int number) {
	int numberCopy = number;
	long long result = 0;
	int times = 0;

	do {
		times += 1;

	} while (numberCopy /= 2);

	for (int i = times; i >= 0; i--) {
		if (number >= pow(2, i - 1)) {
			number -= pow(2, i - 1);
			result += pow(10, i - 1);
		}
	}
	return result;
}

int main()
{
	int number;
	cin >> number;
	cout << toBinary(number);
	return 0;
}