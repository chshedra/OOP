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

//TODO: Не правильно сделано, сейчас все параметры передаются напрямую в поля, без всяких проверок в методах-сетерах
//TODO: это может привести к нарушению логики использования класса.
Point::Point() : _x(0.0), _y(0.0) {}

Point::Point(int x, int y) : _x(x), _y(y) {}