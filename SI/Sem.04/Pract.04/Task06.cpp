#include <iostream>

bool checkSymbol(char S) {
	if ((S >= 65 && S <= 90) || (S >= 97 && S <= 122)) {
		return true;
	}
	return false;
}
bool isCapitalLetter(char S) {
	if (checkSymbol(S)) {
		if (S >= 65 && S <= 90) {
			return true;
		}
	}
	return false;
}
int main() {
	std::cout << "enter symbol" << std::endl;
	char S;
	std::cin >> S;
	std::cout << "checkSymbol: " << std::boolalpha << checkSymbol(S)<< std::endl;
	std::cout << "isCapitalLetter: " << std::boolalpha << isCapitalLetter(S);
}