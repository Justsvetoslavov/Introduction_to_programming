

#include <iostream>

int main()
{
	int date = 0;
	int month = 0;
	std::cout << "Date: ";
	std::cin >> date;
	std::cout << "Month: ";
	std::cin >> month;
	int NextDate = date + 1;
	int NextMonth = month + 1;
		if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
		{
			if (date > 0 && date < 31)
			{
				std::cout << NextDate << " " << month;
			}
			if (date == 31 && month != 12)
			{
				std::cout << "1 " << NextMonth;
			}
			if (date == 31 && month == 12)
			{
				std::cout << "1 " << "1";
			}

		}
		if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
			if (date > 0 && date < 30)
			{
				std::cout << NextDate << " " << month;
			}
			if (date == 30)
			{
				std::cout << "1 " << NextMonth;
			}
		}
		if (month == 2)
		{
			if (date > 0 && date < 28)
			{
				std::cout << NextDate << " " << month;
			}
			if (date == 28)
			{
				std::cout << "1 " << "3";
			}
		}
	return 0;
}

