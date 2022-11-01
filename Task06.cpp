

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
	int sumOfN = 0;
	int sumOfInputNums = 0;

	if (n<1)
	{
		cout << "invalid input.";
		return 0;
	}

	for (int i = 1; i <= n; i++)
	{
		sumOfN += i;
	}

	for (int i = 1; i < n; i++)
	{
		int inputNum;
		cin >> inputNum;
		sumOfInputNums += inputNum;
	}

	int missingNum = sumOfN - sumOfInputNums;
	cout << missingNum;
}


