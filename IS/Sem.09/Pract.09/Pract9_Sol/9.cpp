#include <iostream>

bool is_leap(unsigned year) {

    if (year % 4 == 0)
    {
        if (!(year % 100 == 0 && !(year % 400 == 0)))
        {
            return true;
        }
        
    }
    return false;
}

void print_leap(unsigned number, unsigned current_year) {

    if (number <= current_year)
    {
        return;
    }

    if (is_leap(number))
    {
        std::cout << number << " ";
    }
    
    return print_leap(number - 4, current_year);
}

int main(int argc, char const *argv[])
{
    unsigned number;
    while (number >= 3000)
    {
        std::cout << "Number: ";
        std::cin >> number;    
    }
    print_leap(number, 2023);
    
    return 0;
}
