#include <iostream>

void UpdateLatestEnd(int& latestEnd, int hour, int minute, int duration) {
    const int end = hour * 60 + minute + duration;

    if (end > latestEnd) {
        latestEnd = end;
    }
}

int main() {
    int n = 0;
    std::cin >> n;

    int latestEnd = 0;

    for (int i = 0; i < n; ++i) {
        int hour = 0, minute = 0, duration = 0;
        std::cin >> hour >> minute >> duration;

        UpdateLatestEnd(latestEnd, hour, minute, duration);
    }

    std::cout << latestEnd / 60 % 24 << ' ' << latestEnd % 60 << '\n';

    return 0;
}
