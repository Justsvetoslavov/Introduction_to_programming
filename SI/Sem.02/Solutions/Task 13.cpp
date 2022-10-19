

#include <iostream>

using namespace std;

int main()
{
    int num, a, b, c, d;
    cin >> num;
    a = num / 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;
    int ad = a * 10 + d;
    int bc = b * 10 + c;
    if (ad > bc)
    {
        cout << "greater: (" << ad << ">" << bc << ")" << endl;
    }
    else if (ad == bc)
    {
        cout << "equal: (" << ad << "=" << bc << ")" << endl;
    }
    else
    {
        cout << "less: (" << ad << "<" << bc << ")" << endl;
    }
    
}

