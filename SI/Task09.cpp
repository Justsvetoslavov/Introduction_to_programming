#include <iostream>

int Broqch(char* arr)
{
	int br = 0;
	while (arr[br] != '\0')
	{
		br++;
	}
	return br;
}

int Index(char* text, char* word)
{
	int pom = -1;
	for (int i = 0; i < Broqch(text); i++)
	{
		if (text[i] == word[0])
		{
			bool isTrue = true;
			for (int j = 0; j < Broqch(word); j++)
			{
				if (text[i + j] != word[j])
				{
					isTrue = false;
				}
			}
			if (isTrue)
			{
				pom = i;
				break;
			}
		}
	}
	return pom;

}


int main()
{
	char text[150] = {};
	char word[150] = {};
	std::cin.getline(text, 150);
	std::cin.getline(word, 150);
	std::cout << Index(text, word);
}
