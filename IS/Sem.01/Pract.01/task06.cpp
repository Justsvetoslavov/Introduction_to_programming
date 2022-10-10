#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "Dividend: ";
	cin >> a;
	cout << "Divisor: ";
	cin >> b;

	cout << "The quotient of the division is : " << a / b << endl;
	cout << "The remainder of the division is : " << a % b << endl;

    return 0;
}