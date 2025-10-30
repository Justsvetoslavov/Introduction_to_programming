#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;

	if (a == 2) {
		cout << "Prime";
		return 0;
	}

	if (a % 2 == 0 || a == 1) {
		cout << "Not Prime";
		return 0;
	}

	double squareRoot = sqrt(a);
	for (int i = 3; i <= squareRoot; i += 2) {
		if (a % i == 0) {
			cout << "Not Prime";
			return 0;
		}
	}

	cout << "Prime";

	return 0;
}