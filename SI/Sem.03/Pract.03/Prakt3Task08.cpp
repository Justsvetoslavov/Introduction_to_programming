#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    char s;
    cout << "Enter number and symbol:";
    cin >> n >> s;
    if (n >= 2 && n <= 9)
    {
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= n - i; j++) 
            {
                cout << " ";
            }          
            for (int k = 1; k <= (2 * i) - 1; k++)
             {
                cout << s;
             }
                
            cout << endl;
        }
        for (int i = n-1; i >= 1; i--)  
        {
            for (int j = 1; j <= n-i; j++) 
            {
                cout << " ";
            }
            for (int k = (2 * i) - 1; k >= 1; k--) 
            {
                cout << s;
            }

            cout << endl;
        }
    }
    else 
    { 
        cout << "Invalid input!"; 
    }
    return 0;
}

