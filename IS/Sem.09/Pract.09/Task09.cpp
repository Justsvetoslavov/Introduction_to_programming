#include <iostream>

void is_leap(unsigned year, unsigned current_year) {

    if (year < current_year)
    {
        return;
    }
    
    if (year % 4 == 0)
    {
        if (!(year % 100 == 0 && !(year % 400 == 0)))
        {
            std::cout << year << " ";
        }
        
    }
    return is_leap(year - 1, current_year);
}

// void print_leap(unsigned number, unsigned current_year) {

//     if (number <= current_year)
//     {
//         return;
//     }
//     if (is_leap(number, current_year)) {
//         std::cout << number << " ";
//     }
    
//     return print_leap(number - 1, current_year);
// }

int main(int argc, char const *argv[])
{
    unsigned number;
    while (number >= 3000)
    {
        std::cout << "Number: ";
        std::cin >> number;    
    }
    is_leap(number, 2023);
    
    return 0;
}
