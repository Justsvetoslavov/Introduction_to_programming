#include <iostream>


using namespace std;

int main()
{
	//ex 11
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	int maxValue = max(max(a, b), c);
	int minValue = min(min(a, b), c);
	int averageValue = (a + b + c) - (maxValue + minValue);

	cout << "The max number that can be rezulted is " << maxValue << averageValue << minValue << endl;
}