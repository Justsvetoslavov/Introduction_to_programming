#include <iostream>

using namespace std;

int main() {
	int n = 0, m = 0;

	cin >> n >> m;

	if (n > 0 && m > 0) {
		for (int i = 1; i <= n * m; i++) {
			cout << i << " ";

			if (i % m == 0) {
				cout << endl;
			}
		}
	} else {
		cout << "Invalid input." << endl;
	}
}