#pragma once
#include <iostream>
#include "Point.h"

using namespace std;

class Rectangle
{
private:
	double _length;
	double _width;
	Point _center;
public:
	void SetLength(double length);
	void SetWidth(double width);
	void SetCenter(double x, double y);

	double GetLength()
	{
		return this->_length;
	}

	double GetWidth()
	{
		return this->_width;
	}

	double GetX()
	{
		return _center.GetX();
	}

	double GetY()
	{
		return _center.GetY();
	}

	Rectangle()
	{
		this->SetLength(0.0);
		this->SetWidth(0.0);
		_center.SetX(0.0);
		_center.SetY(0.0);
	}
	Rectangle(double length, double width, double x, double y)
	{
		this->SetLength(length);
		this->SetWidth(width);
		this->SetCenter(x, y);
	}
};

void DemoRectangleWithPoint();
	