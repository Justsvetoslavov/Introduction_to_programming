#include <iostream>

int main() {
    int number = 0;
    std::cout << "Arabic numeral: ";
    std::cin >> number;

    switch (number) {
        case 1: std::cout << "Roman numerals: I\n"; break;
        case 2: std::cout << "Roman numerals: II\n"; break;
        case 3: std::cout << "Roman numerals: III\n"; break;
        case 4: std::cout << "Roman numerals: IV\n"; break;
        case 5: std::cout << "Roman numerals: V\n"; break;
        case 6: std::cout << "Roman numerals: VI\n"; break;
        case 7: std::cout << "Roman numerals: VII\n"; break;
        case 8: std::cout << "Roman numerals: VIII\n"; break;
        case 9: std::cout << "Roman numerals: IX\n"; break;
        default: std::cout << "No Roman numeral for this input\n"; break; // includes 0
    }

    return 0;
}
