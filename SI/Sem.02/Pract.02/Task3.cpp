#include <iostream>
using namespace std;
int main()
{
	int number1, number2;
	cout << "Enter two different numbers" << endl;
	cin >> number1 >> number2;
	if (number1 == number2)
	{
		cout << "Both numbers are equal!";
	}
	else { cout << ((number1 > number2) ? "The first one is larger than the second one" : "The first one is smaller than the second one"); }

	return 0;
}

