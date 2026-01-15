#include <iostream>

size_t fastPow(size_t n, size_t k)
{
    if (k == 0)
    {
        return 1;
    }

    if (k & 1)
    {
        return n * fastPow(n, k - 1);
    }
    else
    {
        return fastPow(n * n, k / 2);
    }
}

int main()
{
    std::cout << fastPow(2, 8);
}