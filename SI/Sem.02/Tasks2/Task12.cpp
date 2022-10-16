#include <iostream>
using namespace std;

int main() {
	int day, month;
	cout << "Date: ";
	cin >> day >> month;

	if ((month == 2) && (day == 28)) {

		day = 1;
		month = 3;
		cout << "Next date: " << day << " " << month << endl;
	}
	else if ((month == 12) && (day == 31)) {

		day = 1;
		month = 1;
		cout << "Next date: " << day << " " << month << endl;
	}
	else if (((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)) && (day == 31)) {

		day = 1;
		month = month++;
		cout << "Next date: " << day << " " << month++ << endl;
	}
	else if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day == 30)) {

		day = 1;
		month = month++;
		cout << "Next date: " << day << " " << month++ << endl;
	}
	else if ((1 <= day < 31) && (1 <= month <= 12)) {

		day = day++;
		cout << "Next date: " << day++ << " " << month << endl;
	}
	else {

		cout << "Error" << endl;
	}

	return 0;
}



