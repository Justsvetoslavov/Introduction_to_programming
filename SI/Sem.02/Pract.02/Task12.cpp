

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter day and month: ";
	int date, month;
	cin >> date >> month;
	if (date >= 1 && date <= 31 && month >= 1 && month <= 12)
	{
		if (month == 2)
		{
			if (date == 28)
			{
				cout << "The next day is: " << 1 << "  " << month + 1;
			}
			if (date < 28)
			{
				cout << "The next day is: " << date + 1 << "  " << month;
			}
			else if(date > 28) { cout << "Invalid symbols!"; }
			
		}
		if (month == 12)
		{
			if (date == 31) { cout << "The next day is: " << 1 << "  " <<  1; }
			else { cout << "The next day is: " << date + 1 << "  " << 1; }
		}
		if (month == 4 || month == 6 || month == 7 || month == 11)
		{
			if (date != 31)
			{
				if (date == 30) { cout << "The next day is: " << 1 << "  " << month + 1; }
				else { cout << "The next day is: " << date + 1 << "  " << month; }
				
			}
			else { cout << "Invalid symbols!"; }
		}
		
		else if (month == 1 || month == 3 || month == 5 || month == 8 || month==9 || month==10)
		{  
			if (date == 31) { cout << "The next day is: " << 1 << "  " << month + 1; }
			else { cout << "The next day is: " << date + 1 << "  " << month; }
		}
	}
	else { cout << "Invalid symbols!"; }
}

