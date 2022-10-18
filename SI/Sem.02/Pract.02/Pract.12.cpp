using namespace std;

int main()
{
	//ex 12

	int day = 0;
	int month = 0;
	cout << "Date: ";

	cin >> day >> month;
	if (day == 28 && month == 2)//february
	{
		day = 1;
		month = 3;
	}
	else if (day == 31 && month == 12)//december
	{
		day = 1;
		month = 1;
	}
	else if (day == 31 && month % 2 != 0)//odd month
	{
		day = 1;
		month++;
	}
	else if (day == 30 && month % 2 == 0)//even month
	{
		day = 1;
		month++;
	}
	else
	{
		day++;
	}

	cout << "Next date: "<<day<<" "<< month << endl;
}