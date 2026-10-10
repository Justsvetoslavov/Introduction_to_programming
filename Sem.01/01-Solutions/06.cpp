#include <iostream>

// Program that calculates the total number of minutes in a given number of hours
int main()
{
    const int minutesPerHour = 60;
    int hours = 3;

    int totalMinutes = hours * minutesPerHour;

    std::cout << hours << " hours are "
              << totalMinutes << " minutes.\n";

    return 0;
}