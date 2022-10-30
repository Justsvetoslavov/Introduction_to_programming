#include <iostream>
using namespace std;
int binarySystem(int num)
{
    int binaryNum = 0; 
    int i = 1;
    while (num > 0)
    {
       binaryNum += (num % 2)*i;
        num /= 2;
        i = i * 10;
    }
    return binaryNum;
}
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    cout << binarySystem(num);
    return 0;
}