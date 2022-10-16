#include <iostream>
using namespace std;

 int main() {

	int yearNumber;
	cout << "Year: ";
	cin >> yearNumber;


	if ((yearNumber % 4 == 0) && (yearNumber % 400 == 0) || (yearNumber % 100 != 0)) {

		cout << "That is a leap year. " << endl;
	}
	else {

		cout << "That is not a leap year. ";
	}

	return 0; 
}