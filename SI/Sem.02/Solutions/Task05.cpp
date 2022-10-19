#include <iostream>

using namespace std;

int main()
{
	double sideA, sideB, sideC;
	cin >> sideA >> sideB >> sideC;
	if ((sideA + sideB) > sideC && (sideA + sideC) > sideB && (sideB + sideC) > sideA)
	{
		cout << "It's a valid triangle";
	}
	else
	{
		cout << "It's not a valid triangle";
	}
}