// Pract.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
	//ex 1
	  /* int year = 0;
	   cout << "Enter year: ";
	   cin >> year;
	   if (year % 4 == 0)
	   {
		   cout << "Leap year!" << endl;
	   }
	   else
	   {
		   cout << "Not a leap year!" << endl;
	   }*/

	   ////ex 2
	   //char symbol = ' ';
	   //cout << "Enter letter:";
	   //cin >> symbol;
	   //if (symbol>='A' && symbol<='z')
	   //{
	   //    switch (symbol)
	   //    {
	   //    case 'A':
	   //    case 'a':
	   //    case 'E':
	   //    case 'e':
	   //    case 'I':
	   //    case 'i':
	   //    case 'O':
	   //    case 'o':
	   //    case 'U':
	   //    case'u':
	   //        cout << "Vowel latin letter.";
	   //        break;
	   //    default:
	   //        cout << "Consonant latin letter.";
	   //        break;
	   //    }
	   //}
	   //else
	   //{
	   //    cout << "Not a latin letter";
	   //}

	   //ex 3
  /*      int a = 0;
		int b = 0;
		cout << "Enter a: ";
		cin >> a;

		cout << "Enter b: ";
		cin >> b;

		cout << (a < b ? b : a);*/

		//ex 4
		/*double gradePercentage = 0;
		double gradeMark = 0;
		bool isExellentStudent = false;
		cout << "Rezult: ";
		cin >> gradePercentage;

		if (gradePercentage >= 90)
		{
			isExellentStudent = true;
			gradeMark = 6;
		}
		else if (gradePercentage >= 80)
		{
			gradeMark = 6;
		}
		else if (gradePercentage >= 70)
		{
			gradeMark = 5;
		}
		else if (gradePercentage >= 60)
		{
			gradeMark = 4;
		}
		else if (gradePercentage >= 40)
		{
			gradeMark = 3;
		}
		else
		{
			gradeMark = 2;
		}

		if (isExellentStudent)
		{
			cout << "Grade:" << gradeMark << "+" << endl;
		}
		else
		{
			cout << "Grade: " << gradeMark << endl;
		}*/

		//ex 5

   /* double sideA = 0;
	double sideB = 0;
	double sideC = 0;

	cout << "Enter a: ";
	cin >> sideA;
	cout << "Enter b: ";
	cin >> sideB;
	cout << "Enter c: ";
	cin >> sideC;

	if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
	{
		cout << "There is a triangle with that sides!" << endl;
	}
	else
	{
		cout << "There is NOT a triangle with that sides!" << endl;
	}*/

	//ex6
	//double a = 0;
	//double b = 0;
	//double c = 0;

	//cout << "Enter a: ";
	//cin >> a;
	//cout << "Enter b: ";
	//cin >> b;
	//cout << "Enter c: ";
	//cin >> c;
	//if (a != 0)
	//{
	//    double descriminant = b * b - 4 * a * c;
	//    if (descriminant < 0)
	//    {
	//        cout << "The equation do not have real solutions";
	//    }
	//    else if (descriminant == 0)
	//    {
	//        double x = -b / (2 * a);
	//        cout << "The solution is " << x << endl;
	//    }
	//    else
	//    {
	//        double x1 = ((-b + sqrt(descriminant)) / (2 * a));
	//        double x2 = ((-b - sqrt(descriminant)) / (2 * a));
	//        cout << "The solutions are " << x1 << " and " << x2 << endl;
	//    }
	//}
	//else
	//{
	//    cout << "a cannot be zero" << endl;
	//}

	//ex 7

	/*char symbol = ' ';
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
	}*/

	//ex 8
	//hardcoded example, bad practic, have not studied loops and arrays yet!

	//int arabicNumber = 0;
	//cout << "Enter arabic number in [1,3999]:";
	//cin >> arabicNumber;

	//string romanNumber = "";

	//if (arabicNumber > 0 && arabicNumber <= 3999)
	//{

	//	int onesPart = -1;
	//	int tenthPart = -1;
	//	int hundrethPart = -1;
	//	int thousanthPart = -1;

	//	if (arabicNumber <= 9)//ones part
	//	{
	//		onesPart = arabicNumber % 10;
	//	}
	//	else if (arabicNumber <= 99)
	//	{
	//		onesPart = arabicNumber % 10;
	//		arabicNumber /= 10;
	//		tenthPart = arabicNumber % 10;
	//	}
	//	else if (arabicNumber <= 999)
	//	{
	//		onesPart = arabicNumber % 10;
	//		arabicNumber /= 10;
	//		tenthPart = arabicNumber % 10;
	//		arabicNumber /= 10;
	//		hundrethPart = arabicNumber % 10;
	//	}
	//	else if (arabicNumber <= 3999)
	//	{
	//		onesPart = arabicNumber % 10;
	//		arabicNumber /= 10;
	//		tenthPart = arabicNumber % 10;
	//		arabicNumber /= 10;
	//		hundrethPart = arabicNumber % 10;
	//		arabicNumber /= 10;
	//		thousanthPart = arabicNumber % 10;
	//	}
	//	switch (onesPart)
	//	{
	//	case 1:
	//		romanNumber = "I";
	//		break;
	//	case 2:
	//		romanNumber = "II";
	//		break;
	//	case 3:
	//		romanNumber = "III";
	//		break;
	//	case 4:
	//		romanNumber = "IV";
	//		break;
	//	case 5:
	//		romanNumber = "V";
	//		break;
	//	case 6:
	//		romanNumber = "VI";
	//		break;
	//	case 7:
	//		romanNumber = "VII";
	//		break;
	//	case 8:
	//		romanNumber = "VIII";
	//		break;
	//	case 9:
	//		romanNumber = "IX";
	//		break;
	//	default:
	//		break;
	//	}

	//	switch (tenthPart)
	//	{
	//	case -1:
	//		break;
	//	case 1:
	//		romanNumber = "X" + romanNumber;
	//		break;
	//	case 2:
	//		romanNumber = "XX" + romanNumber;
	//		break;
	//	case 3:
	//		romanNumber = "XXX" + romanNumber;
	//		break;
	//	case 4:
	//		romanNumber = "XL" + romanNumber;
	//		break;
	//	case 5:
	//		romanNumber = "L" + romanNumber;
	//		break;
	//	case 6:
	//		romanNumber = "LX" + romanNumber;
	//		break;
	//	case 7:
	//		romanNumber = "LXX" + romanNumber;
	//		break;
	//	case 8:
	//		romanNumber = "LXXX" + romanNumber;
	//		break;
	//	case 9:
	//		romanNumber = "XC" + romanNumber;
	//		break;
	//	default:
	//		break;
	//	}


	//	switch (hundrethPart)
	//	{
	//	case -1:
	//		break;
	//	case 1:
	//		romanNumber = "C" + romanNumber;
	//		break;
	//	case 2:
	//		romanNumber = "CC" + romanNumber;
	//		break;
	//	case 3:
	//		romanNumber = "CCC" + romanNumber;
	//		break;
	//	case 4:
	//		romanNumber = "CD" + romanNumber;
	//		break;
	//	case 5:
	//		romanNumber = "D" + romanNumber;
	//		break;
	//	case 6:
	//		romanNumber = "DC" + romanNumber;
	//		break;
	//	case 7:
	//		romanNumber = "DCC" + romanNumber;
	//		break;
	//	case 8:
	//		romanNumber = "DCCC" + romanNumber;
	//		break;
	//	case 9:
	//		romanNumber = "CM" + romanNumber;
	//		break;
	//	default:
	//		break;
	//	}

	//	switch (thousanthPart)
	//	{
	//	case -1:
	//		break;
	//	case 1:
	//		romanNumber = "M" + romanNumber;
	//		break;
	//	case 2:
	//		romanNumber = "MM" + romanNumber;
	//		break;
	//	case 3:
	//		romanNumber = "MMM" + romanNumber;
	//		break;
	//	default:
	//		break;
	//	}
	//	cout << "The roman number is: " << romanNumber << endl;
	//}
	//else
	//{
	//	cout << "Number out of intervals!" << endl;
	//}

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

	//ex 9
	//int a = 0;
	//int b = 0;
	//int c = 0;

	//cout << "Enter a: ";
	//cin >> a;
	//cout << "Enter b: ";
	//cin >> b;
	//cout << "Enter c: ";
	//cin >> c;

	//int max = (a < b ? b : a) < c ? c : (a < b ? b:a);
	//cout << "The max num is: " << max;


	//ex10
	//double a = 0;
	//double b = 0;
	//char operation = ' ';

	//cout << "Enter a: ";
	//cin >> a;
	//cout << "Enter b: ";
	//cin >> b;
	//cout << "Enter operation(*, /, +, -): ";
	//cin >> operation;

	//double rezult = 0;
	//switch (operation)
	//{
	//case '*':
	//	rezult = a * b;
	//	break;
	//case '/':
	//	rezult = a / b;
	//	break;
	//case '+':
	//	rezult = a + b;
	//	break;
	//case '-':
	//	rezult = a - b;
	//	break;
	//default:
	//	cout << "Wrong input!" <<endl;
	//	return 1;
	//	break;
	//}
	//cout << "The rezult of operation " << a <<" "<< operation << " "<< b << " is " << rezult << endl;
	//return 0;

	//ex 11
	//int a = 0;
	//int b = 0;
	//int c = 0;

	//cout << "Enter a: ";
	//cin >> a;
	//cout << "Enter b: ";
	//cin >> b;
	//cout << "Enter c: ";
	//cin >> c;

	//int maxValue = max(max(a, b), c);
	//int minValue = min(min(a, b), c);
	//int averageValue = (a + b + c) - (maxValue + minValue);

	//cout << "The max number that can be rezulted is " << maxValue << averageValue << minValue << endl;
	
	//ex 12
	
	//int day = 0;
	//int month = 0;
	//cout << "Date: ";

	//cin >> day >> month;
	//if (day == 28 && month == 2)//february
	//{
	//	day = 1;
	//	month = 3;
	//}
	//else if (day == 31 && month == 12)//december
	//{
	//	day = 1;
	//	month = 1;
	//}
	//else if (day == 31 && month % 2 != 0)//odd month
	//{
	//	day = 1;
	//	month++;
	//}
	//else if (day == 30 && month % 2 == 0)//even month
	//{
	//	day = 1;
	//	month++;
	//}
	//else
	//{
	//	day++;
	//}

	//cout << "Next date: "<<day<<" "<< month << endl;

	//ex 13
	
	//int inputNumber = 0;
	//cout << "Enter number: ";
	//cin >> inputNumber;
	//int copiedNumber = inputNumber;

	//int newNumberLastDigits = ((copiedNumber / 1000) % 10) * 10 + copiedNumber % 10;
	//int newNumberInnerDigits = ((copiedNumber / 100) % 10) * 10 + (copiedNumber/10) % 10;

	//if (newNumberLastDigits < newNumberInnerDigits)
	//{
	//	cout << newNumberLastDigits<<" < "<<newNumberInnerDigits << endl;
	//}
	//else if (newNumberLastDigits > newNumberInnerDigits)
	//{
	//	cout << newNumberLastDigits << " > " << newNumberInnerDigits << endl;
	//}
	//else
	//{
	//	cout << newNumberLastDigits << " = " << newNumberInnerDigits << endl;
	//}

int m = 0;
int n = 0;

cin >> m >> n;

for (int i = m; i <= n; i++)
{
	if (i > 99)
	{
		int newNumber = ((i / 100) % 10) * 10 + i % 10;
		if (i % newNumber == 0)
		{
			cout << i << endl;
			break;
		}
	}
}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
