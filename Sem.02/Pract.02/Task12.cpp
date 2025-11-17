#include <iostream>

int main()
{
	int day, month;

	std::cout << "Date: ";
	std::cin >> day >> month;

	if (month < 1 || month > 12 || day < 1)
	{
		std::cout << "Invalid date!" << std::endl;
		return 1;
	}

	int daysInMonth;
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		daysInMonth = 31;
		break;
	case 4: case 6: case 9: case 11:
		daysInMonth = 30;
		break;
	case 2:
		daysInMonth = 28; // Non-leap year
		break;
	default:
		std::cout << "Invalid month!" << std::endl;
		return 1;
	}

	if (day > daysInMonth)
	{
		std::cout << "Invalid day for this month!" << std::endl;
		return 1;
	}

	// Calculate next day
	int nextDay = day + 1;
	int nextMonth = month;

	if (nextDay > daysInMonth)
	{
		nextDay = 1;
		nextMonth++;

		if (nextMonth > 12)
		{
			nextMonth = 1;
		}
	}

	std::cout << "Next date: " << nextDay << " " << nextMonth << std::endl;

	return 0;
}
