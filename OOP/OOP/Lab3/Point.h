#pragma once


class Point 
{
private:
	double _x;
	double _y;

	void SetX(double x);
	void SetY(double y);

public:
	double GetX();
	double GetY();

	Point();
	Point(double x, double y);
};
