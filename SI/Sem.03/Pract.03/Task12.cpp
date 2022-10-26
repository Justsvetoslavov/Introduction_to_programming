#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n < 1) {
		cout << "false";
		return 0;
	}

	bool isMultipleOfTwo = true;
	while (n / 2 != 0) {
		if (n % 2 != 0) {
			isMultipleOfTwo = false;
			break;
		}

		n /= 2;
	}

	cout << boolalpha << isMultipleOfTwo << endl;
}