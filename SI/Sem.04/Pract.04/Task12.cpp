#include <iostream>
using namespace std;

int checkInput(int a) {
	while (a < 100 || a > 1000000) {
		cout << "Wrong input. Try again" << endl;
		cin >> a;
	}
	return a;
}

int findTheNearest(int input) {
	int result = 64; // The nearest possible value
	while (result <= input) {
		result *= 2;
	};
	return result / 2;
}

int main()
{

	int a;
	cin >> a;

	int rightInput = checkInput(a);

	cout << findTheNearest(rightInput);

	return 0;

}