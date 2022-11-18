#include <iostream>
using namespace std;

int powOfTwo(int num)
{
	int result = 1;
	for (int i = 0; i < num; i++)
	{
		result *= 2;
	}
	return result;
}

int theResult(int num, int k)
{
	int result = 0, copyOfK = k;
	while (k != 0)
	{
		if (num % 2 == 0)
		{
			num /= 2;
			--k;
		}
		else
		{
			result += powOfTwo(copyOfK - k);
			num /= 2;
			--k;
		}
	}
	return result;
}

int main()
{
    int num, k;
	cin >> num >> k;
	cout << theResult(num, k);
    return 0;
}