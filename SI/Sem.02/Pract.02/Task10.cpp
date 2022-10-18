#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the first real number: ";
    double number1, number2;
    char operation;
    cin >> number1;
    cout << "Enter the operation, that needs to be executed.: ";
    cin >> operation;
    cout << "Enter the second real number: ";
    cin >> number2;

    if (operation == '+')
    {
        cout << "The sum of the two numbers is: " << number1 + number2 << endl;
    }
    else if (operation == '-')
    {
        cout << "The difference of the two numbers is: " << number1 - number2 << endl;
    }
    else if (operation == '*')
    {
        cout << "The multiplication of the two numbers is: " << number1 * number2 << endl;
    }
    else  if (number2 != 0 && operation == '/')
    {
        cout << "The quotient of the two numbers is: " << number1 / number2 << endl;

    }
    else if (number2 == 0 && operation == '/')
    {
        cout << "Division by 0 is not possible!";
    }
    else
    {
        cout << "Invalid symbols!";
    }
    return 0;
}



