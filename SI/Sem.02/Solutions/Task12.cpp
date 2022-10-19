#include <iostream>
using namespace std;

int main()
{
	cout << "Date: ";
	int month, day;
	cin >> day >> month;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (month == 12 && day == 31)
		{
			month = 1;
			day = 1;
		}
		else if (day == 31)
		{
			month++;
			day = 1;
		}
		else
		{
			day++;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (day == 30)
		{
			month++;
			day = 1;
		}
		else
		{
			day++;
		}
		break;
	case 2:
		if (day == 28)
		{
			day = 1;
			month++;
		}
		else
		{
			day++;
		}
		break;


	default: "Wrong input :)";
		break;
	}
	cout << "Next date: " << day  << ' ' << month;
}