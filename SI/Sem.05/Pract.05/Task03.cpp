#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void print(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << endl;
}

int main()
{
    int N, size = 0;
    cin >> N;
    
    int binary[100];
    while(N != 0)
    {
        binary[size++] = N % 2;
        N /= 2;
    }  

    for (int i = 0; i < size/2; i++)
        swap(binary[i], binary[size-i-1]);

    print(binary, size);
}