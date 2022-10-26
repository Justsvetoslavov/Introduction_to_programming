#include <iostream>
using namespace std;
int main()
{
    int n,power;
    power = 0;
    cout << "Enter number: ";
    cin >> n;
    while(n >= 1)
    {
        for (int j = 0; j <= n; j++)
        {
            if(pow(2,j) <= n)
            {
                power = j;
            }
        }
        cout << "2 ^ " << power;
        n -= pow(2, power);
        if (n != 0)
        {
            cout << " + ";
        }
    }
    return 0;
}
