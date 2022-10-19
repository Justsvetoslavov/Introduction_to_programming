#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Please enter whole positive number: ";
    cin >> n;

    n *= n;

    while (true)
    {
        if (n % 10 == 0)
        {
            n /= 10;
            continue;
        }

        break;
    }
    

    while (n != 0)
    {
        
        cout << n % 10;
        n /= 10;
         
    }
}
