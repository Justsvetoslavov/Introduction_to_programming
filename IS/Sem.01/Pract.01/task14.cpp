#include <iostream>

using namespace std;

int main()
{
	long long cardNumber;
	cin >> cardNumber;

	cout << "XXXXXXXXXXXX" << cardNumber % 10000;

	return 0;
}