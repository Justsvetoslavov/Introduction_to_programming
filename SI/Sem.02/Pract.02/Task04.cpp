#include <iostream>

int main() {
	int percentage = 0, grade = 2;

	std::cout << "Result: ";
	std::cin >> percentage;

	if (percentage >= 0 && percentage <= 100) {
		if (percentage >= 40) {
			grade = 3;
			if (percentage >= 60) {
				grade = 4;
				if (percentage >= 70) {
					grade = 5;
					if (percentage >= 80) {
						grade = 6;
						if (percentage >= 90) {
							std::cout << "Grade: " << grade << "+\n";
							return 0;
						}
					}
				}
			}
		}

		std::cout << "Grade: " << grade << std::endl;
	} else {
		std::cout << "Entered percentage is not valid!\n";
	}

	return 0;
}