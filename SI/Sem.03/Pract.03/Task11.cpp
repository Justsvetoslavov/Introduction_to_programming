#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    int bigger = a >= b ? a : b;
    int smaller = a >= b ? b : a;

    for (int i = smaller; i <= bigger; i++)
    {
        bool isPrime = true;
        if (i == 0 || i == 1)
        {
            continue;
        }

        for (int j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }
}