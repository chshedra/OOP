#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::SetLength(double length)
{
	if (length < 0)
	{
		throw("Длина не может быть отрицательной");
	}
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	if (width < 0)
	{
		throw("Ширина не может быть отрицательной");
	}
	this->_width = width;
}

void Rectangle::SetCenter(double x, double y)
{
	this->_center.SetX(x);
	this->_center.SetY(y);
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

Point Rectangle::GetCenter()
{
	return this->_center;
}

Rectangle::Rectangle()
{
	this->SetLength(0.0);
	this->SetWidth(0.0);
	this->SetCenter(0.0, 0.0);
}

Rectangle::Rectangle(double length, double width, double x, double y)
{
	this->SetLength(length);
	this->SetWidth(width);
	this->SetCenter(x, y);
}

void DemoRectangleWithPoint()
{
	const int size = 5;
	Rectangle* rectangles = new Rectangle[size];

	for (int i = 0; i < size; i++)
	{
		rectangles[i].SetCenter(1.2 * i, 2.4 * i);
		rectangles[i].SetLength(2.5 * i);
		rectangles[i].SetWidth(3.4 * i);
	}

	for (int i = 0; i < size; i++)
	{
		cout << "X:" << rectangles[i].GetCenter().GetX() << "; "
			 << "Y:" << rectangles[i].GetCenter().GetY() << "; "
			 << "Length:" << rectangles[i].GetLength() << "; "
			 << "Width:" << rectangles[i].GetWidth() << endl;
	}

	double averageCenterX = 0;
	double averageCenterY = 0;
	for (int i = 0; i < size; i++)
	{
		averageCenterX += rectangles[i].GetCenter().GetX();
		averageCenterY += rectangles[i].GetCenter().GetY();
	}

	cout << "Xcenter = " << averageCenterX / size
		 << " ; Ycenter = " << averageCenterY / size << endl;
}