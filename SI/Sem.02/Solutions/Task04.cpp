#include <iostream>
using namespace std;

int main()
{
	cout << "Result: ";
	int result;
	cin >> result;
	if (result >= 90)
	{
		cout << "Grade: 6+";
	}
	else if (result >= 80)
	{
		cout << "Grade: 6";
	}
	else if (result >= 70)
	{
		cout << "Grade: 5";
	}
	else if (result >= 60)
	{
		cout << "Grade: 4";
	}
	else if (result >= 40)
	{
		cout << "Grade: 3";
	}
	else
	{
		cout << "Grade: 2";
	}


}