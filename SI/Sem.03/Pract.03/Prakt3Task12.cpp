#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	if (n > 0)
	{
		if (n % 2 != 0 && n != 1)
		{
			cout << "false";
		}
		else
		{
			while (n % 2 == 0)
			{
				n = n / 2;
			}
			bool isPowerOfTwo = n == 1;
			cout << boolalpha << isPowerOfTwo;
		}
	}
	else
	{
		cout << "Incorect input!";
	}
	return 0;
}

