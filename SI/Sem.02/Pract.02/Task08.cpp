#include <iostream>

int main() {
	int arabicNumber = 0;

	std::cout << "Arabic numeral: ";
	std::cin >> arabicNumber;

	if (arabicNumber / 10 == 0 && arabicNumber != 0) {
		std::cout << "Roman numerals: ";

		switch (arabicNumber) {
			case 1:
				std::cout << "I";
				break;
			case 2:
				std::cout << "II";
				break;
			case 3:
				std::cout << "III";
				break;
			case 4:
				std::cout << "IV";
				break;
			case 5:
				std::cout << "V";
				break;
			case 6:
				std::cout << "VI";
				break;
			case 7:
				std::cout << "VII";
				break;
			case 8:
				std::cout << "VIII";
				break;
			case 9:
				std::cout << "IX";
				break;
			default:
				break;
		}

		std::cout << std::endl;
	} else {
		std::cout << "Entered number contains more than one digit or is 0." << std::endl;
	}

	return 0;
}