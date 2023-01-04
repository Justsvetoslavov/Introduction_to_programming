#include <iostream>

bool isPresent(int n, int k)
{
	if (n == 0)
	{
		return false;
	}

	if (n % 10 == k)
	{
		return true;
	}

	return isPresent(n / 10, k);

}
int main()
{
	int number, targetDigit;
	std::cin >> number >> targetDigit;
	if (isPresent(number, targetDigit))
	{
		std::cout << "It is present.";
	}
	else
	{
		std::cout << "It is not present.";
	}
	return 0;
}
