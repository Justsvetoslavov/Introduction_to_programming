#include <iostream>
using namespace std;
int main()
{

	int number1, number2, number3, max, min, mid, change, newnumber;
	cout << "Enter three numbers: ";
	cin >> number1 >> number2 >> number3;
	min = number1;
	mid = number2;
	max = number3;
	if (min > mid)
	{
		min = number2;
		mid = number1;

	}
	if (min > max)
	{
		max = min;
		min = number3;

	}
	if (mid > max)
	{
		change = mid;
		mid = max;
		max = change;
	}
	newnumber = max * 100 + mid * 10 + min;
	cout << newnumber;
	return 0;
}

