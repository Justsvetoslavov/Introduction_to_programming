// Prakt2Task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter two real numbers: ";
    double number1, number2, sum;
    cin >> number1 >> number2;
    cout << "The sum of the two numbers is: " << number1 + number2 << endl;
    cout << "The difference of the two numbers is: " << number1 - number2<<endl;
    cout << "The multiplication of the two numbers is: " << number1 * number2 << endl;

    if (number2 != 0)
    {
        cout << "The quotient of the two numbers is: " << number1 / number2<<endl;
      
    }
    else { cout << "Division by 0 is not possible!"; }
    return 0;
}

