// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
//Напишете прост калкулатор, който поддържа операциите + , -, *, / на две реални числа.
//Внимавайте с делението на 0
{
    int a, b;
    char sign;
    cout << "Enter the first number:";
    cin >> a ;
    cout << "Enter operator sign:";
    cin >> sign;
    cout << "Enter the second number:";
    cin >> b;
    switch(sign)
    {
    case'+': cout << "The sum of a and b is:" << a + b ;
        break;
    case'-':cout << "The substraction of a and b is:" << a - b ;
        break;
    case'/':
        if(b==0)
        {
            cout << "The divisor can't be 0!"<< endl;
        }
        else
        {
            cout << "The devision of a and b is:"<<  a / b;
        }
        break;
    case'*': cout << "The multiplication of a and b is:" << a  * b ;
        break;
    dafault:
        cout << "Invalid operation" << endl;
    }

}


