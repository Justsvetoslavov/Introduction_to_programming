#include <iostream>
using namespace std;

void sort3(int& min, int& mid, int& max)
{
	if (min > mid)
	{
		int copyMin = min;
		min = mid;
		mid = copyMin;
	}
	if (mid > max)
	{
		int copyMax = max;
		max = mid;
		mid = copyMax;
	}
	if (min > mid)
	{
		int copyMin = min;
		min = mid;
		mid = copyMin;
	}
}

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	sort3(a, b, c);
	cout << a << " " << b << " " << c << endl;
}
