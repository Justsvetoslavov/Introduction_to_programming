#include <iostream>
using namespace std;

int sumDigits(int number) {
	int sum = 0;
	while (number > 0) {
		sum = sum + (number % 10);
		number /= 10;
	}

	return sum;
}


int main()
{

	int a;
	cin >> a;

	while (a >= 10) {
		a = sumDigits(a);
	}

	cout << a;

	return 0;

}