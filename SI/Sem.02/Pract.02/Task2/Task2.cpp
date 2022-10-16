#include <iostream>

using namespace std;

int main()
{
   char letter;
   cout << "Enter a letter: ";
   cin >> letter;
   if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z')
   {
       switch (letter)
       {
       case 'a':
       case 'A':
       case 'o':
       case 'O':
       case 'e':
       case 'E':
       case 'i':
       case 'I':
       case 'u':
       case 'U': cout << "The letter you entered is a vowel" << endl; break;
       default: cout << "The letter you entered is a consonant" << endl; break;
       }
   }
   else cout << "Entered value is not a letter" << endl;
}