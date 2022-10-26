#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int targetSum = 0;
	for (int i = 1; i <= n; i++) {
		targetSum += i;
	}

	for (int i = 0; i < n - 1; i++) {
		int currentNumber;
		cin >> currentNumber;
		targetSum -= currentNumber;
	}

	cout << targetSum;
}