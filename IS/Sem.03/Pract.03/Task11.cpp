#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0;
	bool isPrime = false;

	cin >> a >> b;

	if (a < 0 || b < 0) {
		cout << "Invalid input." << endl;
		return 0;
	}

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i <= b; i++) {
		if (i == 2) {
			cout << i << " ";
			continue;
		}

		if (i == 0 || i == 1 || i % 2 == 0) {
			continue;
		}

		isPrime = true;

		int squareRoot = sqrt(i);
		for (int j = 3; j <= squareRoot; j += 2) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			cout << i << " ";
		}
	}
}