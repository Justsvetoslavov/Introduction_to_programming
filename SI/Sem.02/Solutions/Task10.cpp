#include <iostream>

using namespace std;

int main()
{
	double a, b;
	cin >> a;
	char op = ' ';
	cin >> op;
	cin >> b;
	switch (op)
	{
	case '+': cout << a + b;
		break;
	case '-': cout << a - b;
		break;
	case '*': cout << a * b;
		break;
	case '/': 
		if (b != 0)
		{
			cout << a / b;
		}
		else
		{
			cout << "The second number shouldn't be zero";
		}
		break;
	default:cout << "Wrong operation";
		break;
	}
}