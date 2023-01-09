#include <iostream>

bool leapYear(const unsigned short year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
			return false;
		}
		else
		{
			return true;
		}
		return true;
	}
	else
	{
		return false;
	}
}

void nextLeapYears(unsigned short year, unsigned short n)
{
	if (n == 0)
	{
		if (leapYear(year))
		{
			std::cout << year << " ";
		}
		return;
	}
	if (leapYear(year))
	{
		std::cout << year << " ";
		return nextLeapYears(year + 1, n - 1);
	}
	return nextLeapYears(year + 1, n);
}

int main()
{
    unsigned short year, n;
	std::cin >> year >> n;
	nextLeapYears(year, n);
    return 0;
}