#include <iostream>
using namespace std;
int calculate(int a, int b, char action)
{    
        if (b == 0 && action == '/')
        {
            cout << "Incorrect input!"<<endl;
            return 0;
        }
        switch (action)
        {
        case '-': return a - b; break;
        case '*': return a * b; break;
        case '/': return a / b; break;
        case '%': return a % b; break;
        default: return a + b; break;
        }
}   
int main()
{
    int a, b; char action;
    cin >> a >>action>> b;
    cout << calculate(a, b, action);
}