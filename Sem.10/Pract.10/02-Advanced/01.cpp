#include <iostream>

size_t _fibonacci_rec(size_t n, size_t *cache)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (!cache[n])
    {
        cache[n] = _fibonacci_rec(n - 1, cache) + _fibonacci_rec(n - 2, cache);
    }

    return cache[n];
}

size_t fibonacci(size_t n)
{
    size_t *cache = new size_t[n + 1]();
    size_t result = _fibonacci_rec(n, cache);
    delete[] cache;

    return result;
}

int main()
{
    // 1 1 2 3 5 8
    std::cout << fibonacci(50);
}