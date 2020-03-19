#include <iostream>
#include "Circle.h"
using namespace std;

Circle* MakeCircle(double x, double y, double radius, 
	const string &color)
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
