#pragma once
#include "../Lab3/Point.h"
#include "../Common/DoubleValidator.h"

class Ring
{
private:
	static int AllRingsCount;

	double _outerRadius;
	double _innerRadius;
	Point* _center;

public:
	static int GetAllRingsCount();

	void SetOuterRadius(double outerRadius);
	void SetInnerRadius(double innerRadius);
	void SetCenter(double x, double y);

	double GetOuterRadius();
	double GetInnerRadius();
	double GetX();
	double GetY();

	Ring();
	Ring(double outerRadius, double innerRadius, double x, double y);

	~Ring();

	double GetArea();
};
