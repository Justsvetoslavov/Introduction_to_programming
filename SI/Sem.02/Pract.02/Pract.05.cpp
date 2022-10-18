#include <iostream>


using namespace std;

int main()
{
	//ex 5

    double sideA = 0;
	double sideB = 0;
	double sideC = 0;

	cout << "Enter a: ";
	cin >> sideA;
	cout << "Enter b: ";
	cin >> sideB;
	cout << "Enter c: ";
	cin >> sideC;

	if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
	{
		cout << "There is a triangle with that sides!" << endl;
	}
	else
	{
		cout << "There is NOT a triangle with that sides!" << endl;
	}
}