#include <iostream>
#include <climits>

size_t min(size_t a, size_t b)
{
    return a < b ? a : b;
}

size_t min(size_t a, size_t b, size_t c)
{
    return min(a, min(b, c));
}

size_t _getMinOperations_recursive(size_t n, size_t *cache)
{
    if (n == 1)
    {
        return 0;
    }

    if (cache[n] == 0)
    {
        size_t r1 = ULLONG_MAX, r2 = ULLONG_MAX, r3 = ULLONG_MAX;

        if (n % 3 == 0)
        {
            r1 = _getMinOperations_recursive(n / 3, cache);
        }
        if (n % 2 == 0)
        {
            r2 = _getMinOperations_recursive(n / 2, cache);
        }
        r3 = _getMinOperations_recursive(n - 1, cache);

        cache[n] = min(r1, r2, r3) + 1;
    }

    return cache[n];
}

size_t getMinOperations(size_t n)
{
    size_t *cache = new size_t[n + 1]();
    size_t result = _getMinOperations_recursive(n, cache);
    delete[] cache;

    return result;
}

int main()
{
    std::cout << getMinOperations(1000);
}