#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a 4-digit natural number: ";
    cin >> a;
    if (a < 1000 || a > 9999)
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    else
    {
        int a1, a2;
        
        a1 = (a/1000)*10 + ((a%1000)%100)%10;
        a2 = ((a/100)%10)*10 + ((a/10)%100)%10;

        cout << "First number is: " << a1 << endl;
        cout << "Second number is: " << a2 << endl;
        if(a1 > a2)
            cout << a1 << " > " << a2 << endl;
        else if(a1 == a2)
            cout << a1 << " = " << a2 << endl;
        else
            cout << a1 << " < " << a2 << endl;
    }
    
}