#include <iostream>
using namespace std;

void print(char S, int N)
{
	for (int i = 0; i < N; i++)
		cout << S;
}

int main()
{
	int N;
	char S;

	cout << "Enter a character and a number: ";
	cin >> S >> N;

	print(S, N);

	return 0;
}