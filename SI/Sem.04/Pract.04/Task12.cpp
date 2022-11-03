// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int smallestNumber(int a)
{
    for (int i = a; i >= 0; --i)
    {

        if ((int)(log(i) / log(2)) == log(i) / log(2))
        {
            return  i;
        }

    }
}

int biggestNumber(int a)
{
    int max = pow(a, 2);
    for (int i = a + 1; i < max; ++i)
    {

        if ((int)(log(i) / log(2)) == log(i) / log(2))
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    if (n < 100 || n > 100000)
    {
	    cin >> n;
    }
    int smallestNum = smallestNumber(n);
    int biggestNum = biggestNumber(n);

    if (n - smallestNum > biggestNum - n)
    {
        cout << biggestNum;
    }
    else
    {
        cout << smallestNum;
    }
}