#include "Ring.h"

#include <iostream>
using namespace std;

int Ring::AllRingsCount = 0;

int Ring::GetAllRingsCount()
{
	return AllRingsCount;
}

void Ring::SetOuterRadius(double outerRadius)
{
	
	DoubleValidator::AssertPositiveValue(outerRadius);
	DoubleValidator::AssertValueInRange(outerRadius, 
		this->_innerRadius, outerRadius);
	this->_outerRadius = outerRadius;
}

void Ring::SetInnerRadius(double innerRadius)
{
	DoubleValidator::AssertPositiveValue(_innerRadius);
	
	DoubleValidator::AssertValueInRange(innerRadius, innerRadius, this->_outerRadius);
	this->_innerRadius = innerRadius;
}

void Ring::SetCenter(double x, double y)
{
	this->_center = new Point(x, y);
}

double Ring::GetOuterRadius()
{
	return this->_outerRadius;
}

double Ring::GetInnerRadius()
{
	return this->_innerRadius;
}

double Ring::GetX()
{
	return this->_center->GetX();
}

double Ring::GetY()
{
	return this->_center->GetY();
}

Ring::Ring() : Ring(0.0, 0.0, 0.0, 0.0)
{
	AllRingsCount++;
}

Ring::Ring(double outerRadius, double innerRadius, double x, double y)
{
	this->SetOuterRadius(outerRadius);
	this->SetInnerRadius(innerRadius);
	this->SetCenter(x, y);
	AllRingsCount++;
}

Ring::~Ring()
{
	AllRingsCount--;
	delete this->_center;
}

double Ring::GetArea()
{
	const double pi = 3.1428;

	return this->_outerRadius * this->_outerRadius * pi -
		this->_innerRadius * this->_innerRadius * pi;
}

