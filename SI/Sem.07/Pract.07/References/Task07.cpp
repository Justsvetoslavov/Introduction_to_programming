#include <iostream>

unsigned const int MAX_COUNT_ROWS = 100;
unsigned const int MAX_COUNT_COLS = 3;
bool GetInput(int movies[MAX_COUNT_ROWS][MAX_COUNT_COLS], int countRows);
void FindEndTime(int movies[MAX_COUNT_ROWS][MAX_COUNT_COLS], int countRows);
int* ConvertToMinutes(int duration);
int* SumTime(int hoursBegin, int minutesBegin, int hoursDuration, int minutesDuration);
bool CheckValidInput(int hours, int minutes, int duration);
void Print(int hoursEnd, int minutesEnd);

int main()
{
	int movies[MAX_COUNT_ROWS][MAX_COUNT_COLS];
	int countRows = 0;
	int a, b;
	std::cin >> countRows;
	if (!GetInput(movies, countRows))
	{
		return 0;
	}
	FindEndTime(movies, countRows);
}

bool GetInput(int movies[MAX_COUNT_ROWS][MAX_COUNT_COLS], int countRows)
{
	for (int i = 0; i < countRows; i++)
	{
		int hourBegin = 0;
		int minutesBegin = 0;
		int duration = 0;
		std::cin >> hourBegin >> minutesBegin >> duration;
		if (!CheckValidInput(hourBegin, minutesBegin, duration))
		{
			std::cout << "Invalid input!";
			return false;
		}
		else
		{
			
			movies[i][0] = hourBegin;
			movies[i][1] = minutesBegin;
			movies[i][2] = duration;
		}
	}
	return true;
}

bool CheckValidInput(int hours, int minutes, int duration)
{
	if (hours >= 0 && minutes >= 0 && duration >= 0)
	{
		return true;
	}
	return false;
}

void FindEndTime(int movies[MAX_COUNT_ROWS][MAX_COUNT_COLS], int countRows)
{
	int maxLatestHour = -1;
	int maxLatestMinutes = -1;

	for (int i = 0; i < countRows; i++)
	{
		int duration = movies[i][2];
		int hoursOfDuration = ConvertToMinutes(duration)[0];
		int minutesOfDuration = ConvertToMinutes(duration)[1];

		int endHour = SumTime(movies[i][0], movies[i][1], hoursOfDuration, minutesOfDuration)[0];
		int endMinutes = SumTime(movies[i][0], movies[i][1], hoursOfDuration, minutesOfDuration)[1];

		if (maxLatestHour < endHour || (maxLatestHour == endHour && maxLatestMinutes < endMinutes))
		{
			maxLatestHour = endHour;
			maxLatestMinutes = endMinutes;
		}
	}
	Print(maxLatestHour, maxLatestMinutes);
}

int* ConvertToMinutes(int duration)
{
	const int minuteInHour = 60;
	int timeTmp[2];
	int hours = duration / minuteInHour;
	timeTmp[0] = hours;
	duration -= hours * minuteInHour;
	int minutesRest = duration;
	timeTmp[1] = minutesRest;
	return timeTmp;
}

int* SumTime(int hoursBegin, int minutesBegin, int hoursDuration, int minutesDuration)
{
	int endTime[2];
	int hoursEnd = hoursBegin + hoursDuration;
	int minutesEnd = minutesBegin + minutesDuration;

	endTime[0] = hoursEnd;
	endTime[1] = minutesEnd;
	return endTime;
}

void Print(int hoursEnd, int minutesEnd)
{
	if (hoursEnd >= 24)
	{
		hoursEnd -= (hoursEnd / 24) * 24;
	}
	if (minutesEnd >= 60)
	{
		int hoursToAdd = (minutesEnd / 60);
		minutesEnd -= hoursToAdd * 60;
		hoursEnd += hoursToAdd;
	}
	if (minutesEnd <=9)
	{
		std::cout << hoursEnd << " 0" << minutesEnd;
	}
	else
	{
		std::cout << hoursEnd << " " << minutesEnd;
	}

}
