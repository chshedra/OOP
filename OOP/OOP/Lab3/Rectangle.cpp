#include "Rectangle.h"

void Rectangle::SetLength(double length)
{
	if (length < 0)
	{
		throw("ƒлина не может быть отрицательной");
	}
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	if (width < 0)
	{
		throw("Ўирина не может быть отрицательной");
	}
	this->_width = width;
}


void Rectangle::SetCenter(double x, double y)
{
	_center.SetX(x);
	_center.SetY(y);
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
		cout << "X:" << rectangles[i].GetX() << "; "
			<< "Y:" << rectangles[i].GetY() << "; ";
		cout << "Length:" << rectangles[i].GetLength() << "; ";
		cout << "Width:" << rectangles[i].GetWidth() << endl;
	}

	double averageCenterX = 0;
	double averageCenterY = 0;
	for (int i = 0; i < size; i++)
	{
		averageCenterX += rectangles[i].GetX();
		averageCenterY += rectangles[i].GetY();
	}

	cout << "Xcenter = " << averageCenterX / size
		 << " ; Ycenter = " << averageCenterY / size << endl;
}