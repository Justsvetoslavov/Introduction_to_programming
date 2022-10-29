#include <iostream>
using namespace std;

int lowestFactor(int number) {
	for (int i = 2; i <= number; i++) {
		if (number % i == 0) {
			return i;
		}
	}
}


int main()
{

	int a;
	cin >> a;

	while (a > 1) {
		int factor = lowestFactor(a);
		a /= factor;
		cout << factor << " ";
	}

	return 0;

}