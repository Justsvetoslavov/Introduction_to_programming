#include <iostream>

void censoring(char* myString)
{
    int i = 0;
    while (myString[i] != '\0')
    {
        myString[i] = '*';
        i++;
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    char* myString = new char[n+1];
    std::cin.getline(myString,n+1);
    censoring(myString);
    std::cout << myString;
    delete[] myString;
}