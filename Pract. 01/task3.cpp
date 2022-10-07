#include <iostream>

using namespace std;

int main() 
{
    int amount;
    cout << "Enter amount in lv:";
    cin >> amount;
    cout << "This amount is " << amount * 0.5 << " in USD and " << amount * 0.51 << " in EUR." << endl;
    return 0;
}
