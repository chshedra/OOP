#include "CollisionManager.h"
#include <cmath>
#include <iostream>
using namespace std;

double CountDelta(double d1, double d2)
{
	return abs(d1 - d2);
}

bool CollisionManager::IsCollision(Rectangle& rectangle1, 
	Rectangle& rectangle2)
{
	double dX = CountDelta(rectangle1.GetX(), rectangle2.GetX());
	double dY = CountDelta(rectangle1.GetY(), rectangle2.GetY());

	return (dX < abs(rectangle1.GetLength() - rectangle2.GetLength()) &&
		dY < abs(rectangle1.GetWidth() - rectangle2.GetWidth()));
}

bool CollisionManager::IsCollision(Ring& ring1, Ring& ring2)
{
	double dX = CountDelta(ring1.GetX(), ring2.GetX());
	double dY = CountDelta(ring1.GetY(), ring2.GetY());
	double C = sqrt(pow(dX, 2) + pow(dY, 2));

	return (C < ring1.GetOuterRadius() + ring2.GetOuterRadius());
}