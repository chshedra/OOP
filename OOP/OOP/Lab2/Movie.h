#pragma once
#include <iostream>
#include "Genre.h"
using namespace std;

struct Movie
{
	string Name;
	int Timing;
	int ReleaseYear;
	Genre MovieGenre;
	double Raiting;
};

int CountMoviesByGenre(Movie* movies, int count, Genre findGenre);
Movie* MakeMovie(Genre genre, const string &name, int timing,
	int releaseYear, double raiting);
Movie* FindBestGenreMovie(Movie* movies, int count, Genre findGenre);
void DemoMakeCopyMovie();
void DemoMovie();
void AutoMovie();