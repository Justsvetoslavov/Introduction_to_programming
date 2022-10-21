#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number between 0 and 100: ";
    cin >> n;
    cout << endl;
    if(n < 0 && n > 100)
        cout << "Invalid input" << endl;
    else
    {
        int guess, guesses = 0;
        do 
        {
            cout << "Take a guess: " << endl;
            cin >> guess;
            guesses++;
            if(guess == n)
                cout << "Your guess was correct\nThe number of guesses was: " << guesses << endl;
            else
            {
                if(guess < n)
                    cout << "Higher" << endl;
                else
                    cout << "Lower" << endl;
            }
        }
        while (guess != n);
    }
    
}