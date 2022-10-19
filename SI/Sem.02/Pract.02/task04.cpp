// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
//Да се напише програма, която чете от конзолата 1 цяло число - проценти от изпит, и отпечатва оценката по следната скала : >= 90 % : 6 +
//>= 80 % : 6
//>= 70 % : 5
//>= 60 % : 4
//>= 40 % : 3
//< 40 % : 2
{
	int result;
	cout << "Exam result:";
	cin >> result;
	if (result >= 90)
	{
		cout << " The mark is: 6+";
	}
	else if (result >= 80)
	{
		cout << "The mark is:6";
	}
	else if(result>=70)
	{
		cout << "The mark is:5";
	}
	else if(result>=60)
	{
		cout << "The mark is:4";
	}
	else if(result>=40)
	{
		cout << "The mark is:3";
	}
	else if (result<40)
	{
		cout << "The mark is:2";
	}
	return 0;


}

