#include <iostream>

using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << Sum(num1, num2);
}
