

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "n must be larger than 0";
    }
    
    return 0;
}


