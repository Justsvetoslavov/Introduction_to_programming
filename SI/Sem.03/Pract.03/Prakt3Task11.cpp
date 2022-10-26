#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter two numbers: "<< endl;
    int a, b, temp;
    bool isPrime;
    cin >> a >> b;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++) 
    {
        isPrime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0 && i != j)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true && i != 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}
