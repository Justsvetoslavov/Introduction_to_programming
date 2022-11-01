#include <iostream>

int closestNum(int num) {
	
	int closestNum = 1;
	while (true) {

		if (abs(num - closestNum) < abs(num - closestNum * 2)) {
			break;
		}
		closestNum *= 2;
	}
}


int main() {

    int num;
	
	do {
		std::cin >> num;

	} while (100 > num || num > 100000);

	
	std::cout << closestNum(num) << std::endl;
}