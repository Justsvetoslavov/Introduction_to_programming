#include <iostream>

using namespace std;

int main() {
	int n;
	char s;
	cin >> n >> s;

	if (n < 2 || n > 9) {
		cout << "Invalid input." << endl;
		return 0;
	}

	int numberOfRows = 2 * n - 1;

	for (int i = 1; i <= numberOfRows; i++) {
		int numberOfEmptySpaces = abs(n - i);
		int	numberOfSymbols = numberOfRows - 2 * numberOfEmptySpaces;

		for (int j = 0; j < numberOfEmptySpaces; j++) {
			cout << ' ';
		}
		for (int j = 0; j < numberOfSymbols; j++) {
			cout << s;
		}

		cout << endl;
	}
}