#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter year: ";
    cin >> year;

    string visokosna = (year % 4 == 0 && year % 100 != 0) ? "visokosna e" : "ne e visokosna";

    cout << visokosna;
    return 0;
}

//Напишете програма, която проверява дали въведена от потребителя година е високосна.
//Проверете сами кои години се считат за високосни.
