#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	bool isFirstHigher = a > b; // 0 or 1

	cout << "Max: " << a * isFirstHigher + b * !isFirstHigher << endl;
	cout << "Min: " << a * !isFirstHigher + b * isFirstHigher << endl;

	return 0;
}