#include <iostream>

bool IsPositive(int num) 
{
    return (num > 0);
}
bool IsNegative(int num) 
{
    return (num < 0);
}

int main()
{
    std::cout << IsPositive(1) << std::endl;
    std::cout << IsNegative(-1) << std::endl;
    
    return 0;
}
