#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int n;
	do
	{
		cin >> n;
		sum += n;
	} while (n != 0);

	cout << sum;

	return 0;
}