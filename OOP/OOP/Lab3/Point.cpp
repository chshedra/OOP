#include "Point.h"

void Point::SetX(int x)
{
		this->_x = x;
}

void Point::SetY(int y)
{
	this->_y = y;
}

double Point::GetX()
{
	return this->_x;
}

double Point::GetY()
{
	return this->_y;
}

Point::Point() : Point(0, 0) {}

Point::Point(int x, int y)
{
	SetX(x);
	SetY(y);
}