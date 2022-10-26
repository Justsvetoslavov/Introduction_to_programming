#include <iostream>
using namespace std;
int main()
{
	int n, newn, newSum, sum;
	sum = 0;
	newSum = 0;
	cout << "Enter a number: " << endl;
	cin >> n;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> newn; 
		newSum += newn;
	}
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout <<  sum - newSum;
}

