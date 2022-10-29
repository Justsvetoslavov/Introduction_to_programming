#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n != 0) {
		int k = 1;
		int pow = 0;

		while (k * 2 <= n) {
			k *= 2;
			pow++;
		}

		n -= k;
		cout << "2^" << pow;

		if (n != 0) {
			cout << "+";
		}
	}
}