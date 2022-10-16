#include <iostream>
using namespace std;

int main() {

	int arabicNumber;
	cout << "Arabic numeral: ";
	cin >> arabicNumber;

	if (1 <= arabicNumber && arabicNumber <= 9) {

		switch (arabicNumber) {

		case 1: cout << "Roman numeral: " << "I"; break;
		case 2: cout << "Roman numeral: " << "II"; break;
		case 3: cout << "Roman numeral: " << "III"; break;
		case 4: cout << "Roman numeral: " << "IV"; break;
		case 5: cout << "Roman numeral: " << "V"; break;
		case 6: cout << "Roman numeral: " << "VI"; break;
		case 7: cout << "Roman numeral: " << "VII"; break;
		case 8: cout << "Roman numeral: " << "VIII"; break;
		case 9: cout << "Roman numeral: " << "IX"; break;

		}
	}
	else {

		cout << "That is not a single digit number. " << endl;
	}
	return 0;
}