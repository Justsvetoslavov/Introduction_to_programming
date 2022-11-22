#include <iostream>
using namespace std;
int getNumberOfDigits(int n)
{
	int counter = 0;
	while (n != 0)
	{
		counter++;
		n >>= 1;
	}
	return counter;
}
int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	cout << "Enter a number: ";
	int k;
	cin >> k;
	int counter = getNumberOfDigits(n);
	for (int i = counter - 1; i >= k; i--)
	{
		n = n & ~(1 << i);               
	}
	cout << n;
	return 0;
}