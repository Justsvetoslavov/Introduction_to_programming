#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    while (n > 2)
    {
        int counter = 0;
        int current = n;

        while (current > 1)
        {
            current = current / 2;
            counter++;
        }

        if (n - pow(2, counter) == 0)
        {
            cout << "2^" << counter;
        }
        else 
        {
            cout << "2^" << counter << " + ";
        }
        
        n = n - pow(2, counter);
    }

    if (n == 1)
    {
        cout << "2^0";
    }
    if (n == 2)
    {
        cout << "2^1";
    }
}