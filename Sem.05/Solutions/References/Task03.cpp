#include <iostream>
using namespace std;

void sort(int& a, int& b, int& c)
{
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
}

int main()
{
    int x = 4, y = 5, z = 3;
    sort(x, y, z);
    cout << x << " " << y << " " << z << endl; // 3 4 5
    return 0;
}
