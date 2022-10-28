#include <iostream>

bool isInInterval(int num, int from, int to) {
	if (num >= from && num <= to) {
		return true;
	}
	return false;
}
int askUser(int from, int to) {
	int n = 0;
	do {
		std::cout << "enter number" << std::endl;
		std::cin >> n;
	} while (!isInInterval(n,from,to));
	return n;
}
int main() {

	std::cout << "enter interval:" << std::endl;
	int from, to;
	std::cin >> from >> to;
	if (from > to) {
		std::cout << "Invalid input";
		return 0;
	}
	std::cout << "number in interval is: " << askUser(from, to) << std::endl;
}