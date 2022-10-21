#include <iostream>

using namespace std;

int main()
{
    unsigned int m, n, k = 0;
    cin >> m >> n;
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            k++;

            // The if and the if-else are used in order to 
            // fix the alignment of 2-digit numbers
            if(k <= 9)
                cout << " " << k << " ";
            else if (k >= 10)
                cout << k << " ";

            if(j == m*n)
                break;
        }
        cout << endl;
    }
    
}