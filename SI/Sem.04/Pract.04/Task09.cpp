

#include <iostream>
using namespace std;
int calculate(int a, int b, char action) {

	int result;

	switch (action)	{
	case '-' :
		result = a - b;
			break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	case '%':
		result = a % b;
		break;

	default:
		result = a + b;
		break; 
	}
	
	return result;

}

int main()
{
	cout << calculate(6, 3, 'v');
}
