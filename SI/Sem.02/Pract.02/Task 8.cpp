

#include <iostream>

using namespace std;

int main()
{
    int numArabic;
    cin >> numArabic;
	switch (numArabic)
	{
	case 1:
		cout << "I" << endl;
		break;
	case 2:
		cout << "II" << endl;
		break;
	case 3:
		cout << "III" << endl;
		break;
	case 4:
		cout << "IV" << endl;
		break;
	case 5:
		cout << "V" << endl;
		break;
	case 6:
		cout << "VI" << endl;
		break;
	case 7:
		cout << "VII" << endl;
		break;
	case 8:
		cout << "VIII" << endl;
		break;
	case 9:
		cout << "IX" << endl;
		break;
	default:
		cout << "Invalid numeral!" << endl;
		break;
	}
}

