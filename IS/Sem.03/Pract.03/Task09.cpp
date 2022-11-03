#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n <= 3) {
		cout << "Invalid input." << endl;
		return 0;
	}

	int num1 = 1, num2 = 1;
	cout << num1 << " " << num2 << " ";

	while (num1 + num2 < n) {
		cout << num1 + num2 << " ";
		int temp = num1;
		num1 = num2;
		num2 = num1 + temp;
	}
}