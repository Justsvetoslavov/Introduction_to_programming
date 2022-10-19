#include <iostream>
using namespace std;
int main()
{
    cout << "n: " << endl;
    int n;
    cin >> n;

    if (n <= 3) {
        cout << "n must be >3";
        return 0;
    }

    int a = 1, b = 1;
    cout << a;
    int c = 1;
   while (c<n) {
        cout << " " << c;
        c = a + b;
        a = b;
        b = c;
    }
}