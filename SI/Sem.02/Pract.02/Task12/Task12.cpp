#include <iostream>

using namespace std;

int main()
{
    int day, month;
    cout << "Enter a day and a month (as numbers): ";
    cin >> day >> month;
    if(day > 31 || month > 12 || month < 1 || day < 1) 
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    else
    {
        switch (month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: 
                if(day == 31)
                {
                    if(month == 12)
                        month = 1;
                    else month++;
                    day = 1;
                }
                else if (day > 31)
                {
                    cout << "Invalid input" << endl;
                    return 1;
                }
                else day++;
                break;

            case 2:
                if(day == 28)
                {
                    if(month == 12)
                        month = 1;
                    else month++;
                    day = 1;
                }
                else if (day > 28)
                {
                    cout << "Invalid input" << endl;
                    return 1;
                }
                else day++;
                break;

            default:
                if(day == 30)
                {
                    if(month == 12)
                        month = 1;
                    else month++;
                    day = 1;
                }
                else if (day > 30)
                {
                    cout << "Invalid input" << endl;
                    return 1;
                }
                else day++;
                break;
        }
    }

    cout << "The next day is: " << day << " " << month << endl;
}