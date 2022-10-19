#include <iostream>
using namespace std;
int main()
{
    cout << "number"<<endl;
    int n;
    cin >> n;
    while (n != 0) {
        if (n == 1) {
            cout << "true" << endl;
            return 0;
        }
        if (n % 2 == 1) {
            break;
        }
        n /= 2;
    }
    cout << "false" << endl;

}