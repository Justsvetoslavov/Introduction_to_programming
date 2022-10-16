#include <iostream>
using namespace std;

int main() {

	int numberOne, numberTwo, numberThree;
	cout << "Enther three whole numbers: ";
	cin >> numberOne >> numberTwo >> numberThree;

	if (numberOne > numberTwo && numberTwo > numberThree) {

		cout << numberOne << " " << numberTwo << " " << numberThree << endl;
	}
	else if (numberOne > numberThree && numberThree > numberTwo) {

		cout << numberOne << " " << numberThree << " " << numberTwo << endl;
	}
	else if (numberTwo > numberOne && numberOne > numberThree) {

		cout << numberTwo << " " << numberOne << " " << numberThree << endl;
	}
	else if (numberTwo > numberThree && numberThree > numberOne) {

		cout << numberTwo << " " << numberThree << " " << numberOne << endl;
	}
	else if (numberThree > numberTwo && numberTwo > numberOne) {

		cout << numberThree << " " << numberTwo << " " << numberOne << endl;
	}
	else if (numberThree > numberOne && numberOne > numberTwo) {

		cout << numberThree << " " << numberOne << " " << numberTwo << endl;
	}
	else {

		cout << "Error" << endl;
	}

	return 0;
}