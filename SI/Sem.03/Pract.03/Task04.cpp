#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	if(n <= 0 || m <= 0) {
		cout << "Invalid input." << endl;
		return 0;
	}

	for (int i = 1; i <= n * m; i++) {
		cout << i << " ";

		if (i % m == 0) {
			cout << endl;
		}
	}
}