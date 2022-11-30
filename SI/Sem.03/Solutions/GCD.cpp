#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int minNumber = a > b ? b : a;

	int gcd = 1;

	for (size_t i = 2; i <= minNumber; i++) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}

	cout << gcd;

    return 0;
}