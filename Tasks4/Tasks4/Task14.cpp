#include <iostream>

int sum(int num) {

	int result = 0;
	while (num > 0) {

		result += num % 10;
		num /= 10;
	}
	return (result);
}


int main() {

	int num;
	std::cin >> num;

	while (num > 9) {

		num = sum(num);
	}
	std::cout << num << std::endl;
}