#include <iostream>
int main() {
	int num = 0, count = 0;
	do {//checks if the number is possitive or 0
		std::cin >> num;
		if (num < 0) {
			std::cout << "Insert positive number: " << std::endl;
		}
		if (num == 0) break;
	} while (num < 0);
	//all numbers two times, except for 0
	while (true) {
		std::cin >> num;
		if (num == 0) {
			std::cout << num << std::endl;
			break;
		}
		count++;
		if (count <= 2) {
			std::cout << "Insert again " << num << "." << std::endl;
		}
		else {
			count = 0;
		}
		
	}
}