#pragma once
#include <iostream>
#include "Enums.h"

using namespace std;

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

struct Movie
{
	string Name;
	int Timing;
	int ReleaseYear;
	Genre Genre;
	double Raiting;
};

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

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



void DemoRectangle();
void  DemoFilm();
void DemoFlight();
void DemoTime();

void AutoRectangle();
void AutoFilm();
void AutoFlight();
void AutoTime();

void WrongPointers();