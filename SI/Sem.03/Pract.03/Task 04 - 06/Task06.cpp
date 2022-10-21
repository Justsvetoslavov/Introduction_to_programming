#include <iostream>

using namespace std;

int main()
{
    int n, ogSum = 0, repSum = 0;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
        ogSum +=i;
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        repSum += a;
    }
    cout << "The number missing is: " << ogSum - repSum << endl;
}