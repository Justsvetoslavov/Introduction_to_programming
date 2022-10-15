
#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char c;
    cin >> a >> c >> b;
	switch (c)
	{
	case'+':
		cout << "a + b = " << a + b << endl;
		break;
	case '-':
		cout << "a - b = " << a - b << endl;
		break;
	case '*':
		cout << "a * b = " << a * b << endl;
		break;
	case '/':
		if (b != 0)
		{
			cout << "a / b = " << a / b << endl;
		}
		else
		{
			cout << "b mustn't equal 0" << endl;
		}
		break;
	default:
		break;
	}
}

