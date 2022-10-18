using namespace std;

int main()
{
	//ex10
	double a = 0;
	double b = 0;
	char operation = ' ';

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter operation(*, /, +, -): ";
	cin >> operation;

	double rezult = 0;
	switch (operation)
	{
	case '*':
		rezult = a * b;
		break;
	case '/':
		rezult = a / b;
		break;
	case '+':
		rezult = a + b;
		break;
	case '-':
		rezult = a - b;
		break;
	default:
		cout << "Wrong input!" <<endl;
		return 1;
		break;
	}
	cout << "The rezult of operation " << a <<" "<< operation << " "<< b << " is " << rezult << endl;
	return 0;
}