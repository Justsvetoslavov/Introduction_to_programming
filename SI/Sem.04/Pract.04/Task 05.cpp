#include <iostream>

void print(char S, int N)
{
    for (int i = 0; i < N; i++)
    {
        std::cout << S;
    }

}

int main()
{
    int num;
    char symbol;
    std::cout << "Please enter a symbol: ";
    std::cin >> symbol;
    std::cout << "Please enter a number: ";
    std::cin >> num;
    print(symbol, num);
}