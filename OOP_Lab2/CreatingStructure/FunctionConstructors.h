#pragma once
#include <iostream>
using namespace std;

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