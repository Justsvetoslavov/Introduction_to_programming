#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	while (b != 0) {
		int r = a % b;

		a = b;
		b = r;
	}

	cout << a;

	return 0;
}