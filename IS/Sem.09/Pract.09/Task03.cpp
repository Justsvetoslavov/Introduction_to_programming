#include <iostream>

void printReverse(int num)
{
	if (num == 0) {
		return;
	}
	
	std::cout << num % 10 << " ";
	printReverse(num / 10);
}
