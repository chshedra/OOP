#pragma once
//#include "Rectangle.h"

class Point 
{
private:
	double _x;
	double _y;
public:
	void SetX(int x);
	void SetY(int y);

	double GetX();
	double GetY();

	Point();
	Point(int x, int y);
};
