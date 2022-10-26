#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	for (int i = -100; i <= 100; i++) {
		if (a * pow(i, 4) + b * pow(i,3) + c * pow(i, 2) + d * i + e >= 0) {
			cout << i << " ";
		}
	}
}