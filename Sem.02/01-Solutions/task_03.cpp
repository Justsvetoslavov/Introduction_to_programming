#include <iostream>

int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    std::cin >> a >> b >> c >> d >> e;

    // Each interior value is a weak local extremum. Endpoints have one neighbor, so they always pass.
    const bool bIsExtremum = (b >= a && b >= c) || (b <= a && b <= c);
    const bool cIsExtremum = (c >= b && c >= d) || (c <= b && c <= d);
    const bool dIsExtremum = (d >= c && d >= e) || (d <= c && d <= e);

    std::cout << (bIsExtremum && cIsExtremum && dIsExtremum ? "yes" : "no") << '\n';

    return 0;
}
