#include <iostream>

using namespace std;

int main()
{
    char operation;
    double a, b;
    cout << "Enter a simple expression: ";
    cin >> a >> operation >> b;
    switch (operation)
    {
    case '+': cout << "Sum = " << a + b << endl; break;
    case '-': cout << "Sub = " << a - b << endl; break;
    case '*': cout << "Mul = " << a * b << endl; break;
    case '/': if(b == 0) {cout << "Error: cannot divide by zero!";}
    else {cout << "Div = " << a / b << endl; } break;

    default: cout << "Invalid operation" << endl;
    }
}