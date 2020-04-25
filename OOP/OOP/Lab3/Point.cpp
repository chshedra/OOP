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

Point::Point()
{
	this->SetX(0.0);
	this->SetY(0.0);
}

Point::Point(int x, int y)
{
	this->SetX(x);
	this->SetY(y);
}