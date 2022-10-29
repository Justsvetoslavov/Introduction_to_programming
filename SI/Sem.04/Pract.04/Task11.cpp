#include <iostream>
using namespace std;

int biggestCommonFactor(int a, int b, int c = 0, int d = 0) {
	int result = 1;
	int smaller = (a > b) ? b : a;
	for (int i = 2; i <= smaller; i++) {
		if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0) {
			result = i;
		}
	}

	return result;
}

int main()
{

	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	cout << "Factor a and b: " << biggestCommonFactor(a, b) << endl;
	cout << "Factor c and d: " << biggestCommonFactor(c, d) << endl;
	cout << "Factor a, b, c and d: " << biggestCommonFactor(a, b, c, d) << endl;

	return 0;
}