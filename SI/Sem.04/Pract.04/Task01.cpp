using namespace std;
#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int firstNum, secondNum;

    cout << "Please enter 2 numbers: ";

    cin >> firstNum >> secondNum;

    cout << sum(firstNum,secondNum);

    return 0;
}