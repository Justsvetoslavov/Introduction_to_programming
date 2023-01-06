#include <iostream>
//Да се напише програма, която по дадена програма на театър изчислява 
//до колко часа продължава най - късното представление.От конзолата се прочита цяло число n - броят на представленията, 
//а на следващите n реда - по 3 цели числа : час, минута на началото на преставлението и продължителността му в минути.
//Програмата изведжда в колко часа приключва последното представление.
const int MINUTES_IN_AN_HOUR = 60;
const int HOURS_IN_A_DAY = 24;
int main()
{
	int movies;
	std::cin >> movies;
	int startHour, startMinutes, durationOfMovie;
	int latest = 0;
	while (movies != 0)
	{
		std::cin >> startHour >> startMinutes >> durationOfMovie;
		int endTime = startHour * MINUTES_IN_AN_HOUR + startMinutes + durationOfMovie;
		if (endTime > latest)
		{
			latest = endTime;
		 }
		
		movies--;
		
	}

	std::cout << latest/MINUTES_IN_AN_HOUR % HOURS_IN_A_DAY<< " " << latest % MINUTES_IN_AN_HOUR;
	return 0;
}