using namespace std;
#include <iostream>

bool isPositive(int num)
{
    return num > 0 ? true : false;
}

bool isNegative(int num)
{
    return num < 0 ? true : false;
}

int main()
{
    int num;

    cout << "Please enter 1 number: ";

    cin >> num;

    if (isPositive(num))
    {
        cout << num << " is positive";
        return 0;
    }

    else if (isNegative(num))
    {
        cout << num << " is negative";
        return 0;
    }

    cout << num << " is neither positive nor negative => 0";
    return 0;
}