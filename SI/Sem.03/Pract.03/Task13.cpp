#include <iostream>
using namespace std;
int main()
{
	cout << "number" << endl;
	int n;
	cin >> n;
	int i, power;
	cout << n << " = ";

	while (n > 1) {
		i = 1;
		power = 0;
		while (i <= n) {
			i *= 2;
			power++;
		}
		i /= 2;
		power--;
		n -= i;
		cout << "2^" << power;
		if (n > 1) {
			cout << " + ";
		}
	}
	if (n == 1) {
		cout << " + 2^0" << endl;
	}
}