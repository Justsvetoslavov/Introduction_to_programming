#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            
            for (int c = b; c <= n; c++)
            {
                if(c == sqrt(a*a + b*b) && a < b+c && b < a + c && c < a +b )
                {
                    cout << a <<" "<< b<<" " << c << endl;
                }
            }
        }
    }
}

