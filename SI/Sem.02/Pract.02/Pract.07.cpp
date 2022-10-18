using namespace std;

int main()
{
	//ex 7

	char symbol = ' ';
	cout << "Enter a char: ";
	cin >> symbol;
	if (symbol >= 65 && symbol <= 122)
	{
		if (symbol >= 65 && symbol <= 90)
		{
			cout << (char)tolower(symbol) << endl;
		}
		else
		{
			cout << (char)toupper(symbol) << endl;
		}
	}
	else
	{
		cout << "Invalid character" << endl;
	}
}