#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = Sum(a, b);
    cout << sum;
}