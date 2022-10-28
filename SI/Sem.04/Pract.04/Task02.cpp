#include <iostream>

bool IsEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    std::cout << IsEven(2) << std::endl;
    std::cout << IsEven(1) << std::endl;
    
    return 0;
}
