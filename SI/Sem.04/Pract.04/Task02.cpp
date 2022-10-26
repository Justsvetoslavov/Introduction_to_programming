using namespace std;
#include <iostream>

bool isEven(int num)
{
    return num % 2 == 0 ? true : false;
}

int main()
{
    int num;

    cout << "Please enter 1 number: ";

    cin >> num;

    if (isEven(num))
    {
        cout << num << " is even";
        return 0;
    }

    cout << num <<" is odd";
    return 0;
}