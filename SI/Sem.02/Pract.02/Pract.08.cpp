using namespace std;

int main()
{
	//ex 8
	hardcoded example, bad practic, have not studied loops and arrays yet!

	int arabicNumber = 0;
	cout << "Enter arabic number in [1,3999]:";
	cin >> arabicNumber;

	string romanNumber = "";

	if (arabicNumber > 0 && arabicNumber <= 3999)
	{

		int onesPart = -1;
		int tenthPart = -1;
		int hundrethPart = -1;
		int thousanthPart = -1;

		if (arabicNumber <= 9)//ones part
		{
			onesPart = arabicNumber % 10;
		}
		else if (arabicNumber <= 99)
		{
			onesPart = arabicNumber % 10;
			arabicNumber /= 10;
			tenthPart = arabicNumber % 10;
		}
		else if (arabicNumber <= 999)
		{
			onesPart = arabicNumber % 10;
			arabicNumber /= 10;
			tenthPart = arabicNumber % 10;
			arabicNumber /= 10;
			hundrethPart = arabicNumber % 10;
		}
		else if (arabicNumber <= 3999)
		{
			onesPart = arabicNumber % 10;
			arabicNumber /= 10;
			tenthPart = arabicNumber % 10;
			arabicNumber /= 10;
			hundrethPart = arabicNumber % 10;
			arabicNumber /= 10;
			thousanthPart = arabicNumber % 10;
		}
		switch (onesPart)
		{
		case 1:
			romanNumber = "I";
			break;
		case 2:
			romanNumber = "II";
			break;
		case 3:
			romanNumber = "III";
			break;
		case 4:
			romanNumber = "IV";
			break;
		case 5:
			romanNumber = "V";
			break;
		case 6:
			romanNumber = "VI";
			break;
		case 7:
			romanNumber = "VII";
			break;
		case 8:
			romanNumber = "VIII";
			break;
		case 9:
			romanNumber = "IX";
			break;
		default:
			break;
		}

		switch (tenthPart)
		{
		case -1:
			break;
		case 1:
			romanNumber = "X" + romanNumber;
			break;
		case 2:
			romanNumber = "XX" + romanNumber;
			break;
		case 3:
			romanNumber = "XXX" + romanNumber;
			break;
		case 4:
			romanNumber = "XL" + romanNumber;
			break;
		case 5:
			romanNumber = "L" + romanNumber;
			break;
		case 6:
			romanNumber = "LX" + romanNumber;
			break;
		case 7:
			romanNumber = "LXX" + romanNumber;
			break;
		case 8:
			romanNumber = "LXXX" + romanNumber;
			break;
		case 9:
			romanNumber = "XC" + romanNumber;
			break;
		default:
			break;
		}


		switch (hundrethPart)
		{
		case -1:
			break;
		case 1:
			romanNumber = "C" + romanNumber;
			break;
		case 2:
			romanNumber = "CC" + romanNumber;
			break;
		case 3:
			romanNumber = "CCC" + romanNumber;
			break;
		case 4:
			romanNumber = "CD" + romanNumber;
			break;
		case 5:
			romanNumber = "D" + romanNumber;
			break;
		case 6:
			romanNumber = "DC" + romanNumber;
			break;
		case 7:
			romanNumber = "DCC" + romanNumber;
			break;
		case 8:
			romanNumber = "DCCC" + romanNumber;
			break;
		case 9:
			romanNumber = "CM" + romanNumber;
			break;
		default:
			break;
		}

		switch (thousanthPart)
		{
		case -1:
			break;
		case 1:
			romanNumber = "M" + romanNumber;
			break;
		case 2:
			romanNumber = "MM" + romanNumber;
			break;
		case 3:
			romanNumber = "MMM" + romanNumber;
			break;
		default:
			break;
		}
		cout << "The roman number is: " << romanNumber << endl;
	}
	else
	{
		cout << "Number out of intervals!" << endl;
	}

	//example of a better solution

	//char b = 'b';
	//string a(1, b);

	////cout <<  << endl;

	//int arabicNumber = 0;
	//cout << "Enter arabic number in [1,3999]:";
	//cin >> arabicNumber;

	//string romanNumber = "";
	//char baseSymbols[] = { 'I','V','X','L','C','D','M' };
	///* for a specific tenth(1-9)
	//1 - 3 -> first 1
	//4     -> first 2
	//5     -> first 2
	//6 - 8 -> first 2
	//9     -> first 3
	//*/
	//int countTenth = 1;
	/* for each tenth
	tenth = 1 (for 1-9) -> index: 0 - 2       : symbols -> I, V, X
	tenth = 2 (for 10 - 99) -> index: 0 - 4   : symbols -> X, L, C
	tenth = 3 (for 100 - 999) -> index: 0 - 6 : symbols -> C, D, M
	...
	tenth = n
	*/
	//string firstSymbol = "";
	//string secondSymbol = "";
	//string thirdSymbol = "";




	//while (arabicNumber != 0)
	//{
	//	//make this a method!!!!
	//	//hardcoded!!!
	//	switch (countTenth)
	//	{
	//	case 1:
	//		firstSymbol = baseSymbols[countTenth - 1];
	//		secondSymbol = baseSymbols[countTenth];
	//		thirdSymbol = baseSymbols[countTenth + 1];
	//		break;
	//	case 2:
	//		firstSymbol = baseSymbols[countTenth];
	//		secondSymbol = baseSymbols[countTenth+1];
	//		thirdSymbol = baseSymbols[countTenth + 2];
	//		break;
	//	case 3:
	//		firstSymbol = baseSymbols[countTenth +1];
	//		secondSymbol = baseSymbols[countTenth+2];
	//		thirdSymbol = baseSymbols[countTenth + 3];
	//		break;
	//	case 4:
	//		firstSymbol = baseSymbols[countTenth + 2];
	//		secondSymbol = "";
	//		thirdSymbol = "";
	//		break;
	//		//...
	//	default:
	//		break;
	//	}

	//	int lastDigit = arabicNumber % 10;
	//	arabicNumber /= 10;

	//	//1-3
	//	if (lastDigit >= 1 && lastDigit <= 3)
	//	{
	//		for (int i = 0; i < lastDigit; i++)
	//		{

	//			romanNumber = firstSymbol + romanNumber;
	//		}
	//	}
	//	//4
	//	else if (lastDigit == 4)
	//	{
	//		romanNumber = firstSymbol + secondSymbol + romanNumber;
	//	}
	//	//5
	//	else if (lastDigit == 5)
	//	{
	//		romanNumber = secondSymbol + romanNumber;
	//	}
	//	//6-8
	//	else if (lastDigit >= 6 && lastDigit <= 8)
	//	{

	//		for (int i = 5; i < lastDigit; i++)
	//		{
	//			romanNumber = firstSymbol + romanNumber;
	//		}
	//		romanNumber = secondSymbol + romanNumber;
	//	}
	//	//9
	//	else if (lastDigit == 9)
	//	{
	//		romanNumber = firstSymbol + thirdSymbol + romanNumber;
	//	}
	//	countTenth++;


	//}
	//cout << "Roman number: " << romanNumber << endl;
}