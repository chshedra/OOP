#pragma once
#include <iostream>
#include "Structures.h"
#include "Enums.h"

using namespace std;
//TODO: Каждую сущность вместе с использующими её функциями в отдельный файл.
//2.2.2.1
struct Rectangle
{
	double Length;
	double Width;
	string Color;
};

struct Flight
{
	string DeparturePoint;
	string FinalDestination;
	int FlightTime;
};

//TODO: RSDN
//2.2.9.
enum Genre
{
	COMEDY,
	DRAMA,
	THRILLER,
	ACTION,
	HORROR,
	BLOCKBUSTER
};

struct Movie
{
	string Name;
	int Timing;
	int ReleaseYear;
	Genre MovieGenre;
	double Raiting;
};

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

//2.2.2.2
struct Contact
{
	string Name;
	string Surname;
	string Number;
};

struct Song
{
	string Name;
	string Singer;
	int Timing;
};

struct Subject
{
	string Name;
	int Hours;
	string Lector;
	int Grade;
};


//2.2.3
void DemoRectangle();
void DemoFilm();
void DemoFlight();
void DemoTime();

void AutoRectangle();
void AutoFilm();
void AutoFlight();
void AutoTime();

void WrongPointers();
int CountMoviesByGenre(Movie* movies, int count, Genre findGenre);