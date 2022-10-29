#include <iostream>
using namespace std;
int calculate(int a, int b, char action)
{    
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
