#pragma once
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

	double GetLength();
	double GetWidth();
	Point GetCenter();

	Rectangle();
	Rectangle(double length, double width, double x, double y);
};

void DemoRectangleWithPoint();
	