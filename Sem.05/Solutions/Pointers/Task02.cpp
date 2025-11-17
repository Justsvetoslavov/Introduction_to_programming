#include <iostream>
using namespace std;

int* bigger(int* x, int* y)
{
    if(*x > *y)
        return x;
    return y;
}

int main()
{
    int a = 7, b = 3;
    int* p = bigger(&a, &b);
    cout << *p << endl; // 7
    return 0;
}
