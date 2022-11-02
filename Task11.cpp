

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cin >> a >> b;
	bool isSimple = false;
	int smallerNum;
	int biggerNum;
	if (a >= b)
	{
		smallerNum = b;
		biggerNum = a;
	}
	else
	{
		smallerNum = a;
		biggerNum = b;
	}

	for (int i = smallerNum; i <= biggerNum; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			if ((i != j && i % j == 0) || i == 1 || i < 0)
			{
				isSimple = false;
				break;
			}
			else
			{
				isSimple = true;
			}
		}

		if (isSimple)
		{
			cout << i << ", ";
		}
	}
}

