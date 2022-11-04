#include <iostream>

using namespace std;

void RepetitiveNumbers(int* numbers, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(numbers[i] == numbers[j])
            {
                cout << "First repeated number was: " << numbers[i] << endl;
                return;
            }
        }
        
    }
    cout << "No number was repeated in this sequence" << endl;;
}

void fill(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int currentNum;
        cin >> currentNum;
        array[i] = currentNum;
    }
}

int main()
{
    int numbers[100];
    int N;
    cout << "How many numbers will you enter: ";
    cin >> N;

    cout << endl;
    fill(numbers, N);
    cout << endl;

    RepetitiveNumbers(numbers, N);
}