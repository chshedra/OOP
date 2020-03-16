#include <iostream>
#include "Structures.h"
#include "FunctionsForStructures.h"
#include "FunctionConstructors.h"
#include "Enums.h"

using namespace std;

void DemoRectangle()
{
	Rectangle object;
	object.Length = 3.5;
	object.Width = 7.99;
	object.Color = "Red";

	Rectangle newRectangle;
	cout << "RECTANGLE" << endl;
	cout << "Enter the length: ";
	cin >> newRectangle.Length;
	cout << "Enter the width: ";
	cin >> newRectangle.Width;
	cout << "Enter the colour: ";
	cin >> newRectangle.Color;
	cout << object.Length << " " << object.Width
		<< " " << object.Color << endl;
	cout << endl;
	//2.2.4
	Rectangle* pointer = &object;
	cout << "Pointer" << endl
		<< pointer->Length << " "
		<< pointer->Width << " "
		<< pointer->Color << endl;
	pointer->Length = 10.9;
	pointer->Width = 34.7;
	pointer->Color = "Blue";
	Rectangle* pointer2 = &object;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
	WriteRectangle(object);
	WriteRectangle(newRectangle);

	Exchange(object, newRectangle);

	WriteRectangle(object);
	WriteRectangle(newRectangle);

}

void  DemoFilm()
{
	Movie newFilm;
	newFilm.MovieGenre = DRAMA;
	newFilm.Name = "Requiem to the dream";
	newFilm.Raiting = 8.6;
	newFilm.ReleaseYear = 2001;
	newFilm.Timing = 124;
	cout << "FILM" << endl;
	cout << "Enter the genre: ";
	//cin >> newFilm.Genre;
	cout << "Enter the name: ";
	cin >> newFilm.Name;
	cout << "Enter the raiting: ";
	cin >> newFilm.Raiting;
	cout << "Enter the release year: ";
	cin >> newFilm.ReleaseYear;
	cout << "Enter the timing: ";
	cin >> newFilm.Timing;
	cout << newFilm.MovieGenre << " " << newFilm.Name << " "
		<< newFilm.Raiting << " " << newFilm.ReleaseYear
		<< " " << newFilm.Timing << endl;

	//2.2.4
	Movie* pointer = &newFilm;
	cout << "Pointer" << endl
		<< pointer->MovieGenre << " "
		<< pointer->Name << " "
		<< pointer->Raiting << endl
		<< pointer->ReleaseYear << endl
		<<pointer->Timing << endl;
	pointer->MovieGenre = ACTION;
	pointer->Name= "Superman";
	pointer->Raiting = 4.7;
	pointer->ReleaseYear = 2011;
	pointer->Timing = 160;
	Movie* pointer2 = &newFilm;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
	
}

void DemoFlight()
{
	Flight newFlight;
	newFlight.DeparturePoint = "Moscow";
	newFlight.FinalDestination = "Seul";
	newFlight.FlightTime = 346;
	cout << "FLIGHT" << endl;
	cout << "Enter the departure point: ";
	cin >> newFlight.DeparturePoint;
	cout << "Enter the final destination: ";
	cin >> newFlight.FinalDestination;
	cout << "Enter the flight time: ";
	cin >> newFlight.FlightTime;
	cout << newFlight.DeparturePoint << " "
		<< newFlight.FinalDestination << " "
		<< newFlight.FlightTime << endl;
	//2.2.4
	Flight *pointer = &newFlight;
	cout << "Pointer" << endl
		<< pointer->DeparturePoint << " "
		<< pointer->FinalDestination<< " "
		<< pointer->FlightTime<< endl;
	pointer->DeparturePoint = "Tomsk";
	pointer->FinalDestination = "Dublin";
	pointer->FlightTime = 230;
	Flight * pointer2 = &newFlight;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
}

void DemoTime()
{
	Time newTime;
	newTime.Hours = 4;
	newTime.Minutes = 45;
	newTime.Seconds = 3;
	cout << "TIME" << endl;
	cout << "Enter the hour: ";
	cin >> newTime.Hours;
	cout << "Enter the minutes: ";
	cin >> newTime.Minutes;
	cout << "Enter the seconds: ";
	cin >> newTime.Seconds;
	cout << newTime.Hours << ":" << newTime.Minutes
		<< ":" << newTime.Seconds << endl;

	//2.2.4
	Time *pointer = &newTime;
	cout << "Pointer" << endl
		<< pointer->Hours << " "
		<< pointer->Minutes << " "
		<< pointer->Seconds << endl;
	pointer->Hours = 10;
	pointer->Minutes = 34;
	pointer->Seconds = 56;
	Time *pointer2 = &newTime;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
}

void AutoRectangle()
{
	const int size = 3;
	Rectangle array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].Length = 1.5 + i;
		array[i].Width = 2.7 * i;
		array[i].Color = "Red" + i;
		cout << array[i].Length << " " << array[i].Width
			<< " " << array[i].Color << endl;
	}

	FindRectangle(array, size);
	cout << endl;
	FindMaxRectangle(array, size);
}

void AutoFilm()
{
	const int size = 3;
	Movie array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].MovieGenre = HORROR;
		array[i].Name = "Film " + i;
		array[i].Raiting = 5.6 + i;
		array[i].ReleaseYear = 2000 + i * 2;
		array[i].Timing = 10 * (i + 5);
		cout << array[i].MovieGenre << " " << array[i].Name
			<< " " << array[i].Raiting << " " << array[i].ReleaseYear
			<< " " << array[i].Timing << endl;
	}

	
}

void AutoFlight()
{
	const int size = 3;
	Flight array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].DeparturePoint = "Point " + i;
		array[i].FinalDestination = "Destination " + i;
		array[i].FlightTime= 10 * (i + 5);
		cout << array[i].DeparturePoint << " " << array[i].FinalDestination
			<< " " << array[i].FlightTime << endl;
	}
}

void AutoTime()
{
	const int size = 3;
	Time array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].Hours = 10 + i;
		array[i].Minutes= 20 * i;
		array[i].Seconds = 30 + i;
		cout << array[i].Hours << " " << array[i].Minutes
			<< " " << array[i].Seconds << endl;
	}
}

void WrongPointers()
{
	Movie newFilm;
	Movie* filmPointer = &newFilm;
	Flight newFlight;
	Flight* flightPointer = &newFlight;

	/*filmPointer = &newFlight;
	flightPointer = &newFlight;*/
}

void DemoMovieWithGenre()
{
	Movie movie;
	movie.MovieGenre = ACTION;
	movie.Name = "Folm";
	movie.Raiting = 9.5;
	movie.ReleaseYear = 2019;
	movie.Timing = 120;
	//TODO: RSDN
	Movie* movie2 = MakeMovie(HORROR, "Stranges", 5.8, 1999, 90);
	int count = 5;
	Movie** movies = new Movie*[count];
	for (int i = 0; i < count; i++)
	{
		//TODO: RSDN
		movies[i] = MakeMovie(ACTION, "name" + i, 3.5 + i, 2010 + i, 120);
	}
	int countMovie = CountMoviesByGenre(*movies, count, ACTION);
	delete movie2;
}



Movie* FindBestGenreMovie(Movie* movies, int count, Genre findGenre)
{
	Movie maxRaitngMovie;
	maxRaitngMovie.Raiting = 0;
	bool isFound = false;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].MovieGenre == findGenre)
		{
			if (movies->Raiting > maxRaitngMovie.Raiting)
			{
				maxRaitngMovie = movies[i];
				//TODO: ?
				isFound == true;
			}
		}
	}
	//TODO: зачем сравнение с true?
	if (isFound == true)
	{
		return &maxRaitngMovie;
	}
	else
	{
		return nullptr;
	}
}

int CountMoviesByGenre(Movie* movies, int count, Genre findGenre)
{
	int countMovie = 0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].MovieGenre == findGenre)
		{
			countMovie++;
		}
	}
	return countMovie;
}