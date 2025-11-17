bool isCapitalLetter(char S)
{
	return 'A' <= S && S <= 'Z';
}

bool checkSymbol(char S)
{
	return (S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z');
}