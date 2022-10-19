

#include <iostream>

using namespace std;

int main()
{
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
		if (day != 31 && month != 12)
		{
			day++;
			cout << day << " " << month << endl;
		}
		else
		{
			if (month != 12)
			{
				day = 1;
				month++;
				cout << day << " " << month << endl;
			}
			else
			{
				day = 1;
				month = 1;
				cout << day << " " << month << endl;
			}
			
		}
		break;
	case 2:
		if (day != 28)
		{
			day++;
			cout << day << " " << month << endl;
		}
		else
		{
			day = 1;
			month++;
			cout << day << " " << month << endl;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (day != 30)
		{
			day++;
			cout << day << " " << month << endl;
		}
		else
		{
			day = 1;
			month++;
			cout << day << " " << month << endl;
		}
		break;
	default:
		break;
	}
}

