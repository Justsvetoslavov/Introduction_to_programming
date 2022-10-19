#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	if (m <= 0 || n <= 0)
	{
		cout << "m and n must be larger than 0";
	}
	else
	{
		int p = m * n;

		for (int i = 0; i < p; i++)
		{
			if (i % n == 0)
			{
				cout << endl;
			}
			cout << i + 1 << ' ';
		}
	}
}