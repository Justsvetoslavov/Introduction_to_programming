

#include <iostream>

int main()
{
    int number = 0;
    std::cout << "Arabic numeral: ";
    std::cin >> number;
    if (number > 0 && number < 10)
    {
        switch (number)
        {
        case 1: std::cout << "Roman numerals: " << "I"; break;
        case 2: std::cout << "Roman numerals: " << "II"; break;
        case 3: std::cout << "Roman numerals: " << "III"; break;
        case 4: std::cout << "Roman numerals: " << "IV"; break;
        case 5: std::cout << "Roman numerals: " << "V"; break;
        case 6: std::cout << "Roman numerals: " << "VI"; break;
        case 7: std::cout << "Roman numerals: " << "VII"; break;
        case 8: std::cout << "Roman numerals: " << "VII"; break;
        case 9: std::cout << "Roman numerals: " << "IX"; break;
        default:
            break;
        }
    }
    else
    {
        std::cout << "Invalid!";
    }
    return 0;
}

