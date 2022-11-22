#include <iostream>
using namespace std;
int numberOfOnes(int num)
{
	int counter = 0;
	int rem = num % 2;
	while (num != 0)
	{
		if (rem == 1)
		{
			counter++;
		}
		num >>= 1;
		rem = num % 2;
	}
	return counter;
}
int main()
{
	cout << "Enter a number: ";
	int num;
	cin >> num;
	cout << numberOfOnes(num);
	return 0;
}