

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n; j++)
		{

			for (int k = 1; k <= n; k++)
			{
				if (i * i + j * j == k * k && i <= j)
				{
					cout << i << " " << j << " " << k << endl;
				}
			}
		}
	}
}

