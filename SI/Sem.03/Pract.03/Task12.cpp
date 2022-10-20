#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	bool power = true;

	while (n / 2 != 1)
	{
		
		if (n % 2 != 0)
		{
			power = false;
		}

		n /= 2;
	}

	cout << boolalpha << power;
}