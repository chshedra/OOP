#include <iostream>
#include "FunctionConstructors.h"
#include "Structures.h"

using namespace std;

Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* circle = new Circle();
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

Circle* CopyCircle(Circle& circle)
{
	Circle* copiedCircle = new Circle();
	copiedCircle->X = circle.X;
	copiedCircle->Y = circle.Y;
	copiedCircle->Radius = circle.Radius;
	copiedCircle->Color = circle.Color;

	return copiedCircle;
}

void DemoCircle()
{
	
	Circle* circle1 = MakeCircle(4.1, 4, 12, "Black");
	Circle* circle2 = MakeCircle(3.8, 4.6, 2, "Red");
	Circle* circle3 = MakeCircle(4.6, 3, 9, "Blue");

	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);
}

Flight* MakeFlight(string departurePoint, string finalDestination, int time)
{
	Flight* flight = new Flight();

	flight->DeparturePoint = departurePoint;
	flight->FinalDestination = finalDestination;
	flight->FlightTime = time;

	return flight;
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copiedFlight = new Flight();

	copiedFlight->DeparturePoint = flight.DeparturePoint;
	copiedFlight->FinalDestination = flight.FinalDestination;
	copiedFlight->FlightTime = flight.FlightTime;

	return copiedFlight;
}

void DemoMakeCopyFlight()
{
	Flight* flight = MakeFlight("Moscow", "Paris", 126);

	Flight* copyFlight1 = CopyFlight(*flight);

	cout << flight->DeparturePoint << "->"
		<< flight->FinalDestination << " : "
		<< flight->FlightTime << endl;
}


Movie* MakeMovie(Genre genre, string name, int timing, int releaseYear, double raiting)
{
	Movie* movie = new Movie();

	movie->MovieGenre = genre;
	movie->Name = name;
	movie->Raiting = raiting;
	movie->ReleaseYear = releaseYear;
	movie->Timing = timing;

	return movie;
}

Movie* CopyMovie(Movie& movie)
{
	Movie* copiedMovie= new Movie();

	copiedMovie->MovieGenre = movie.MovieGenre;
	copiedMovie->Name = movie.Name;
	copiedMovie->Raiting = movie.Raiting;
	copiedMovie->ReleaseYear = movie.ReleaseYear;
	copiedMovie->Timing = movie.Timing;

	return copiedMovie;
}

void DemoMakeCopyMovie()
{
	Movie* movie = MakeMovie(ACTION, "Fast&Furios", 120, 2012, 6.8);
	Movie* copiedMovie = CopyMovie(*movie);

	cout << movie->MovieGenre << " " << movie->Name << " "
		<< movie->Raiting << " " << movie->ReleaseYear << " "
		<< movie->Timing << endl;

	cout << copiedMovie->MovieGenre << " " << copiedMovie->Name << " "
		<< copiedMovie->Raiting << " " << copiedMovie->ReleaseYear << " "
		<< copiedMovie->Timing << endl;
}


Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* time = new Time;

	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;

	return time;
}

Time* CopyTime(Time &time)
{
	Time* copiedTime = new Time;

	copiedTime->Hours = time.Hours;
	copiedTime->Minutes = time.Minutes;
	copiedTime->Seconds = time.Seconds;

	return copiedTime;
}

void DemoMakeCopyTime()
{
	Time* time = MakeTime(20, 45, 23);

	Time* copiedTime = CopyTime(*time);

	cout << time->Hours << ":" << time->Minutes << ":"
		<< time->Seconds << endl;

	cout << copiedTime->Hours << ":" << copiedTime->Minutes << ":"
		<< copiedTime->Seconds << endl;
}