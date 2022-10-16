#include <iostream>
using namespace std;
int main() {
    char a;
    cout<<"Please enter a symbol:"<<endl;
    cin>>a;
    bool isVowel;
    if((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) {
        cout<<"This is a letter from the latin alphabet"<<endl;
        switch(a) {
            case 'a': 
            case 'A': 
            case 'E': 
            case 'e': 
            case 'o': 
            case 'O':
            case 'I': 
            case 'i': 
            case 'U': 
            case 'u': isVowel = true; break;
            default: isVowel = false; break;
        }
        cout<<(isVowel ? "It is also a vowel" : "It is also not a vowel");

    }
    else {
        cout<<"This is not a letter from the latin alphabet";
    }
}