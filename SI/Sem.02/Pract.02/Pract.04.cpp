#include <iostream>


using namespace std;

int main()
{
	//ex 4
	double gradePercentage = 0;
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
	}
}