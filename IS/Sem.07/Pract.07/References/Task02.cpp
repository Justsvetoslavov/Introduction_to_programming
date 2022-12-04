#include <iostream>
using namespace std;

bool isLetter(char symbol);
void ToLower(char& symbol);
void ToUpper(char& symbol);
bool isUpper(char symbol);

int main()
{
  char symbol;
  cin >> symbol;
  if(isLetter(symbol))
  {
    if(isUpper)
    {
        ToLower(symbol);
    }
    else
    {
        ToUpper(symbol);
    }
  }
}

bool isLetter(char symbol)
{
	return (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');
}

bool isUpper(char symbol)
{
    return symbol >= 'A' && symbol <= 'Z';
}

void ToLower(char& symbol)
{
	symbol += 32;	
}

void ToUpper(char& symbol)
{
	symbol -= 32;
}