#include <iostream>

using namespace std;

int main()
{
    //I can't get rid of repetitive values of a,b & c for numbers higher than 12
    unsigned int n, P = 0;
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            for (int c = 1; c <= n; c++)
            {
                if(c*c == a*a + b*b)
                {
                    if(P == a + b + c)
                        continue;
                    else
                    {
                        cout << "a = " << a << " b = " << b << " c = " << c << endl;
                        P = a + b + c;
                    }
                }
                    else
                        continue;
            }
            
        }
        
    }
    
}