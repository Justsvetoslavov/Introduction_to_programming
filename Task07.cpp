#include <iostream>

void calculateHours(int& hour, int& minute, int startHour, int startMinute, int duration) {
    startMinute += duration;
    while(startMinute >= 60) {
        startMinute -= 60;
        startHour++;
    }

    if(startHour > hour) {
        hour = startHour;
        minute = startMinute;
    }
    else if(startHour == hour && minute > startMinute) {
        minute = startMinute;
    }
}

void convertHoursToNormalTime(int& hours) {
    while(hours >= 24) {
        hours-= 24;
    }
}

int main() {
    int n, hour = 0, minute = 0;
    std::cin >> n;
    if(n < 0) return 0;
    for(int i = 0; i < n; i++) {
        int startingHour, startingMinute, duration;
        std::cin >> startingHour >> startingMinute >> duration;
        calculateHours(hour, minute, startingHour, startingMinute, duration);
    }
    convertHoursToNormalTime(hour);
    std::cout << hour << " " << minute << std::endl;
}
