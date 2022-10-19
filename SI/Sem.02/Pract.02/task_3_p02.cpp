

#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	std::cout << "Enter number 1: ";
	std::cin >> a;
	std::cout << "Enter number 2: ";
	std::cin >> b;
	std::cout << (a > b  ? "Number 1 > Number 2 " : "Number 2 > Number 1 ");
	return 0;
}

