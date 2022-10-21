#include <iostream>

using namespace std;

int main()
{
    int n, fiboNow = 0, fiboBefor = 1, fiboStep = 1;
    cin >> n;
    if (n < 3)
        cout << "Invalid input";
    else
    {
        cout << endl << fiboBefor << " " << fiboStep << " ";
        do
        {
            fiboNow = fiboBefor + fiboStep;
            cout << fiboNow << " ";
            fiboBefor = fiboStep;
            fiboStep = fiboNow;
        } 
        while (fiboBefor + fiboStep <= n);
    }
    cout << endl;
    
}