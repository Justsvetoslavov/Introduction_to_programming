#include <iostream>
using namespace std;
int main()
{
	cout << "Enter number > 3 : ";
	int num, num1, num2, temp;
	num1 = 0;
    num2 = 1;
	cin >> num;
	if(num > 3)
	{ 
		do
		{
			temp = num1;
			num1 = num1 + num2;
			num2 = temp;
			cout << num1<<" ";
		} while (num1 + num2 <= num);
	}
	else { cout << "Incorect input! "; }
	return 0;
}
