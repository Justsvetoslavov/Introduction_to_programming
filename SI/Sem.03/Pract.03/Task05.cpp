#include <iostream>;
using namespace std;

int main()
{
    int targetNumber;
    int counter = 0;
    int guessNumber;

    cout << "Please enter whole number from 0 to 100: ";
    cin >> targetNumber;

    do
    {
        cout << "Enter your guess: ";

        cin >> guessNumber;
        counter++;

        if (guessNumber == targetNumber)
        {
            cout << "You won with " << counter << " attempts";
            break;
        }
    } while (true);
}
