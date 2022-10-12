#include <iostream>

using namespace std;

int main()
{
	int apples, pears, bananas;

	cout << "Apples: ";
	cin >> apples;
	cout << "Pears: ";
	cin >> pears;
	cout << "Bananas: ";
	cin >> bananas;

	cout << "Pesho, don't forget to buy " << apples << " apples, "
		<< pears << " pears and " << bananas << " bananas!";

	return 0;
}