
#include <iostream>
void isPositive(int number) {
	if (number>0)
	{
		std::cout << "Your number is positive."<<std::endl;
	}
	else {

		std::cout << "Your number is not positive." << std::endl;
	}
}

void isNegative(int number) {
	if (number < 0)
	{
		std::cout << "Your number is negative." << std::endl;
	}
	else {

		std::cout << "Your number is not negative."<<std::endl;
	}
}
int main()
{
	int number = 0;
	std::cin >> number;
	isPositive(number);
	isNegative(number);
}