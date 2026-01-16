#include <iostream>

// N
void example1(size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        /* code */
    }
}

// N^2
void example2(size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j += 2)
        {
            /* code */
        }
    }
}

// NLogN
void example3(size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j < n; j *= 2)
        {
            /* code */
        }
    }
}

// N^2
void example4(const char *str)
{
    for (size_t i = 0; i < strlen(str); i++)
    {
        /* code */
    }
}

// NLogN
void example5(size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j < n; j *= 2)
        {
            /* code */
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j < n; j *= 2)
        {
            /* code */
        }
    }
}
