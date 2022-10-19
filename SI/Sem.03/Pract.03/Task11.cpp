#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

	bool prime = true;
	for (int i = a; i <= b; i++) {
		for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0 && i != 2) {
				prime = false;
				break;
			}
		}
		if (prime && i!=1) {
			cout << i << endl;
		}
		prime = true;
	}
}

