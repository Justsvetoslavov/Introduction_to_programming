#include <iostream>
using namespace std;

int main()
{
	double number1, number2;
	cin >> number1 >> number2;
	cin.ignore();
	double finalResult = number1 > number2 ? number1 : number2;
	cout << "Number " << finalResult << " is bigger" << endl;
}