#include <iostream>

using namespace std;

int main()
{
	int n, x, y;
	cin >> n;
	if (n > 0)
	{
		for (int i = 0; i < n -1 ; i++)
		{
			x = i + 1;
			y = n - x;
			cout << "x = " << x << " y = " << y << endl;
		}
	}
	else
	{
		cout << "n must be larger than 0";
	}
	return 0;
}