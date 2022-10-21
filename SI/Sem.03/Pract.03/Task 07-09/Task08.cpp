#include <iostream>

using namespace std;

int main()
{
    int n; 
    char s;
    cin >> n >> s;
    if (n < 2 || n > 9)
        cout << "Invalid input" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int p = 1; p <= i; p++)
            {
                cout << s;
            }
            for (int t = 1; t <= i - 1; t++)
            {
                cout << s;
            }
            
            cout << endl;
        }
        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = 1; j <= n - (n - i); j++)
            {
                cout << " ";
            }
            for (int p = n - i; p >= 1; p--)
            {
                cout << s;
            }
            for (int t = n - i; t > 1; t--)
            {
                cout << s;
            }
            cout << endl;
        }
        cout << endl;
    }
    
}