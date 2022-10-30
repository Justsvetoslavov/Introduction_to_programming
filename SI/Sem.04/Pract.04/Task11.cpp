#include <iostream>
using namespace std;


int biggestCommonFactor(int a, int b) {
	int result = 1;
	int smaller = (a > b) ? b : a;
	for (int i = 2; i <= smaller; i++) {
		if (a % i == 0 && b % i == 0) {
			result = i;
		}
	}

	return result;
}



int main() {


	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int factorFirst = biggestCommonFactor(a, b);
	int factorSecond = biggestCommonFactor(c, d);

	cout << "Factor a and b: " << factorFirst << endl;
	cout << "Factor c and d: " << factorSecond << endl;
	cout << "Factor a, b, c and d: " << biggestCommonFactor(factorFirst, factorSecond) << endl;

	return 0;
}