#include <iostream>
#include "Movie.h"
using namespace std;

void  DemoMovie()
{
	//TODO: +‘орматирование кода, сгруппированные логические части кода лучше раздел€ть пустыми строками
	Movie newFilm;

	newFilm.MovieGenre = Drama;
	newFilm.Name = "Requiem to the dream";
	newFilm.Raiting = 8.6;
	newFilm.ReleaseYear = 2001;
	newFilm.Timing = 124;

	cout << "FILM" << endl;
	cout << "Enter the genre: ";
	newFilm.MovieGenre = Action;
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
		<< pointer->Timing << endl;

	pointer->MovieGenre = Action;
	pointer->Name = "Superman";
	pointer->Raiting = 4.7;
	pointer->ReleaseYear = 2011;
	pointer->Timing = 160;

	Movie* pointer2 = &newFilm;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
}

void AutoMovie()
{
	const int size = 3;
	Movie array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].MovieGenre = Horror;
		array[i].Name = "Film " + i;
		array[i].Raiting = 5.6 + i;
		array[i].ReleaseYear = 2000 + i * 2;
		array[i].Timing = 10 * (i + 5);
		cout << array[i].MovieGenre << " " << array[i].Name
			<< " " << array[i].Raiting << " " << array[i].ReleaseYear
			<< " " << array[i].Timing << endl;
	}
}

//TODO: +передача по значению, насколько правильно?
Movie* MakeMovie(Genre genre, const string &name, int timing, 
	int releaseYear, double raiting)
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
	Movie* copiedMovie = new Movie();

	copiedMovie->MovieGenre = movie.MovieGenre;
	copiedMovie->Name = movie.Name;
	copiedMovie->Raiting = movie.Raiting;
	copiedMovie->ReleaseYear = movie.ReleaseYear;
	copiedMovie->Timing = movie.Timing;

	return copiedMovie;
}

void DemoMakeCopyMovie()
{
	Movie* movie = MakeMovie(Action, "Fast&Furios", 120, 2012, 6.8);
	Movie* copiedMovie = CopyMovie(*movie);

	cout << movie->MovieGenre << " " << movie->Name << " "
		<< movie->Raiting << " " << movie->ReleaseYear << " "
		<< movie->Timing << endl;

	cout << copiedMovie->MovieGenre << " " << copiedMovie->Name << " "
		<< copiedMovie->Raiting << " " << copiedMovie->ReleaseYear << " "
		<< copiedMovie->Timing << endl;
}

void DemoMovieWithGenre()
{
	Movie movie;
	movie.MovieGenre = Action;
	movie.Name = "Folm";
	movie.Raiting = 9.5;
	movie.ReleaseYear = 2019;
	movie.Timing = 120;

	Movie* newMovie = MakeMovie(Horror, "Stranges", 5.8, 1999, 90);
	//TODO: +const?
	const int count = 5;
	Movie** movies = new Movie * [count];
	for (int i = 0; i < count; i++)
	{
		movies[i] = MakeMovie(Action, "name" + i, 
			3.5 + i, 2010 + i, 120);
	}
	int countMovie = CountMoviesByGenre(*movies, count, Action);
	delete newMovie;
	//TODO: +delete над одним указателем, а над вторыми указател€ми?
	delete *movies;
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
				isFound = true;
			}
		}
	}
	if (isFound)
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