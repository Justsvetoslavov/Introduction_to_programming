#include <iostream>
using namespace std;
int checkNum(int num)
{
	while (num < 100 || num > 100000)
	{
		cout << "Invalid input! Enter a new number:";
		cin >> num;
	}
	return num;
}
int abs(int num)
{
	return num > 0 ? num : -num;
}
int closestPowOfTwo(int num)
{   
	int closest = 100000;
	for(int i = 128; ; i *= 2)
	{
		if (abs(num - i) < closest)
		{
			closest = abs(num - i);
		}
		else
		{
			closest = i / 2;
			break;
		}
	}
	return closest;
}
int main()
{   
	cout << "Enter a number from 100 to 100000: ";
	int num;
	cin >> num;
	cout << closestPowOfTwo(checkNum(num));
	return 0;
}

