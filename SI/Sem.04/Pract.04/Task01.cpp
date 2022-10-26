#include <iostream>
int sum(int a, int b)
{
	return a + b;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	std::cout << "Please enter numbers: ";
	std::cin >> num1 >> num2;
	std::cout << sum(num1, num2);
	return 0;
}