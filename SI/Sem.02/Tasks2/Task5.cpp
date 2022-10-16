#include <iostream>
using namespace std;

int main() {

	int sideA, sideB, sideC;
	cin >> sideA;
	cin >> sideB;
	cin >> sideC;

	if ((sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA)) {

		cout << "That is a valid triangle. " << endl;
	}
	else {

		cout << "That is not a valid triangle. " << endl;
	}
	return 0;
}
	