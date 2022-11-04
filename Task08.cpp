
#include <iostream>
using namespace std;
int pow(int num, unsigned N) {

    int result = 0;

    if (N == 0) {
        result = 1;
    }
    else if (N > 0) {
        for (N; N >= 1; N--) {
            result *= num;
        }
    }
    return result;
}  
        


int main()
{
    cout << pow(3, 4);
}

