

#include <iostream>
using namespace std;

int main()
{
    int m;
    int n;

    cin >> m >> n;

    if (n<=0 || m<=0)
    {
        cout << "Invalid input.";
            return 0;
    }

    int endNum = m * n;
    int currentNum = 1;


    while (currentNum<=endNum)
    {
        for (int i = 0; i < n; i++)
        {
            cout << currentNum << ' ';
            currentNum++;
        }
        cout << endl;
    }
}


