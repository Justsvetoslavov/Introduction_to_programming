#include <iostream>

int main() {
    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;
    const int secondsPerDay = 24 * secondsPerHour;

    int totalSeconds = 0;
    std::cout << "Seconds: ";
    std::cin >> totalSeconds;

    const int days = totalSeconds / secondsPerDay;
    const int hours = totalSeconds % secondsPerDay / secondsPerHour;
    const int minutes = totalSeconds % secondsPerHour / secondsPerMinute;
    const int seconds = totalSeconds % secondsPerMinute;

    std::cout << days << " days, " << hours << " hours, "
              << minutes << " minutes and " << seconds << " seconds\n";

    return 0;
}
