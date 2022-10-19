#include <iostream>

int main() {
	int natNum = 1, square = 1, temp = 1;
	std::cin >> natNum;
	square = natNum * natNum;
	while (square / 10 >= 0) {
		temp = square % 10;
		if (temp != 0) {
			std::cout << temp;
		}
		square /= 10;
	}
	std::cout << std::endl;
}