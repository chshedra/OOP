#pragma once
#include "Rectangle.h"

class Point 
{
private:
	double _x;
	double _y;
public:
	void SetX(int x)
	{
		this->_x = x;
	}
	void SetY(int y)
	{
		this->_y = y;
	}
	double GetX()
	{
		return this->_x;
	}
	double GetY()
	{
		return this->_y;
	}
	Point()
	{
		this->SetX(0.0);
		this->SetY(0.0);
	}
	Point(int x, int y)
	{
		this->SetX(x);
		this->SetY(y);
	}
};
