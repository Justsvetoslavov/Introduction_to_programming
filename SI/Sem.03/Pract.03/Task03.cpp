

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n_squared = n * n;
    while(n_squared!=0)
    {
        if (n_squared % 10 != 0)
        {
            cout << n_squared % 10;
        }
        n_squared /= 10;
    }
}

