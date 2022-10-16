#include <iostream>
using namespace std;

int main() {

	
	int examPercentage;
	cout << "Result: ";
	cin >> examPercentage;
	
	if (examPercentage < 40) {

		cout << "Grade: " << 2;
	}
	else if (40 <= examPercentage && examPercentage < 60) {

		cout << "Grade: " << 3;
	}
	else if (60 <= examPercentage && examPercentage < 70) {

		cout << "Grade: " << 4;
	}
	else if (70 <= examPercentage && examPercentage < 80) {

		cout << "Grade: " << 5;
	}
	else if (80 <= examPercentage && examPercentage < 90) {

		cout << "Grade: " << 6;
	}
	else if (90 <= examPercentage) {

		cout << "Grade: " << 6 << '+';

		}
	return 0;
}