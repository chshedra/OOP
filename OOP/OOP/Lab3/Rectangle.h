#pragma once
#include "Point.h"
#include "../Common/DoubleValidator.h"

using namespace std;

class Rectangle
{
private:
	double _length;
	double _width;
	Point *_center;

public:
	void SetLength(double length);
	void SetWidth(double width);
	void SetCenter(double x, double y);


	double GetLength();
	double GetWidth();
	double GetX();
	double GetY();

	Rectangle();
	Rectangle(double length, double width, double x, double y);
};

void DemoRectangleWithPoint();
	