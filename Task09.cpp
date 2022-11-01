

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

	if (n<=3)
	{
		cout << "invalid input";
		return 0;
	}

	int currentNum=1;
	int lastNum=1;
	cout << lastNum <<" "<< currentNum<<" ";
	int newNum = currentNum + lastNum;

	while (newNum <=n)
	{
		cout << newNum<< " ";
		lastNum = currentNum;
		currentNum = newNum;
		newNum = currentNum + lastNum;
	}
}

