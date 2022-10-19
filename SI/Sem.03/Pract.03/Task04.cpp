#include <iostream>
using namespace std;

int main()
{
    int m;
    int n;

    cout << "Please enter 2 whole positive numbers: ";

    cin >> m >> n;

    for (int i = 1; i <= n*m; i++)
    {
        cout << i << " ";

        if (i%n == 0)
        {
            cout << "\n";
        }

    }
}
