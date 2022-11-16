#include <iostream>

using namespace std;

int GetNum(int n)
{
	return n & (n - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << GetNum(n);
}