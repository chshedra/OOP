#pragma once
#include <iostream>
#include "Structures.h"
using namespace std;

//2.2.7
struct Circle
{
	double X;
	double Y;
	double Radius;
	string Color;
};

void DemoMakeCopyFlight();
void DemoMakeCopyMovie();
void DemoMakeCopyTime();
Movie* MakeMovie(Genre genre, string name, int timing, 
					int releaseYear, double raiting);