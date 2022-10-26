#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, result,  digits, firstDigit;
    cout << "Enter a number: ";
    cin >> num;
    result = 0;
    int counter = 0;
    num != 0 ? digits = log10(num) + 1 : digits = 1;
    
    if (digits % 2 != 0)
    {
        for (int i = 1; i <= digits; i++)
        {
            if (i != digits / 2 + 1)
            {
                result = result + (num % 10) * pow(10, counter);
                counter++;
            }

            num = num / 10;
        }
    }
    else
    {
        for (int i = 1; i <= digits; i++)
        {
            if (i != digits / 2 + 1 && i != digits / 2)
            {
                result = result + (num % 10) * pow(10, counter);
                counter++;
            }

            num = num / 10;
        }
    }
    cout << result << ", " << result + 1;
    return 0;
}

