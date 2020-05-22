#include "Rectangle.h"

#include <iostream>
using namespace std;

void Rectangle::SetLength(double length)
{
	DoubleValidator* positiveValidator = new DoubleValidator();
	positiveValidator->AssertPositiveValue(length);
	this->_length = length;

	delete positiveValidator;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator* positiveValidator = new DoubleValidator();
	positiveValidator->AssertPositiveValue(width);

	this->_width = width;
}

void Rectangle::SetCenter(double x, double y)
{
	this->_center = new Point(x, y);
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

double Rectangle::GetX()
{
	return this->_center->GetX();
}

double Rectangle::GetY()
{
	return this->_center->GetY();
}

Rectangle::Rectangle() : Rectangle(0.0, 0.0, 0.0, 0.0) {}

Rectangle::Rectangle(double length, double width, double x, double y)
{
	this->SetLength(length);
	this->SetWidth(width);
	this->SetCenter(x, y);
}


