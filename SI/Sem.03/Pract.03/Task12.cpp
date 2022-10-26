#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	bool isAPowerOfTwo = true;
	while (number > 1)
	{
		if (number % 2 != 0)
		{
			isAPowerOfTwo = false;
			break;
		}
		number /= 2;
	}
	cout << boolalpha << isAPowerOfTwo;
}