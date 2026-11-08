#include <iostream>

int main() {
    const double usdPerEur = 1.16;
    const double gbpPerEur = 0.87;

    double amount = 0.0;
    std::cout << "Amount in EUR: ";
    std::cin >> amount;

    std::cout << amount * usdPerEur << " USD\n";
    std::cout << amount * gbpPerEur << " GBP\n";

    return 0;
}
