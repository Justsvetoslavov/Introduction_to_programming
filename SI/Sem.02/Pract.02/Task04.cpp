#include <iostream>

int main() {
	int percentage, grade;

	std::cout << "Result: ";
	std::cin >> percentage;

	if (percentage >= 0 && percentage <= 100) {
		bool isSixPlus = false;

		if (percentage >= 90) {
			grade = 6;
			isSixPlus = true;
		} else if (percentage >= 80) {
			grade = 6;
		} else if (percentage >= 70) {
			grade = 5;
		} else if (percentage >= 60) {
			grade = 4;
		} else if (percentage >= 40) {
			grade = 3;
		} else {
			grade = 2;
		}

		std::cout << "Grade: " << grade << (isSixPlus ? "+\n" : "\n");
	} else {
		std::cout << "Entered percentage is not valid!\n";
	}

	return 0;
}