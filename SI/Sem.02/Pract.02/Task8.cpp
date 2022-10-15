// Task8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// the first version of solution
	const char* rNums[9] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
	int num;
	cout << "Enter a single-digit arabic number: ";
	cin >> num;
	cout << "Roman number: " << rNums[num - 1] << endl;  

	// the second verson of solution
	/*int num;
	cout << "Enter a single-digit arabic number: ";
	cin >> num;
	switch (num)
	{
		case 1:
			cout << "Roman number: I" << endl;
			break;
		case 2:
			cout << "Roman number: II" << endl;
			break;
		case 3:
			cout << "Roman number: III" << endl;
			break;
		case 4:
			cout << "Roman number: IV" << endl;
			break;
		case 5:
			cout << "Roman number: V" << endl;
			break;
		case 6:
			cout << "Roman number: VI" << endl;
			break;
		case 7:
			cout << "Roman number: VII" << endl;
			break;
		case 8:
			cout << "Roman number: VIII" << endl;
			break;
		case 9:
			cout << "Roman number: IX" << endl;
			break;
		default:
			cout << "invalid input!" << endl;
			break;
	}*/
}

