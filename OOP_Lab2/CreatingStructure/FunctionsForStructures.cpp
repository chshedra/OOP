#include <iostream>
#include "Structures.h"
#include "FunctionsForStructures.h"

void WriteRectangle(Rectangle& rectangle)
{
	cout << "Length: " << rectangle.Length << endl
		<< "Width: " << rectangle.Width << endl;
}

void ReadRectangle(Rectangle &rectangle)
{
	cout << "Enter the length: ";
	cin >> rectangle.Length;
	cout << "Enter the width: ";
	cin >> rectangle.Width;
}

void DemoWriteAndReadRectangle(Rectangle& rectangle)
{
	int count = 3;
	for (int i = 0; i < count; i++)
	{
		ReadRectangle(rectangle);
	}

	for (int i = 0; i < count; i++)
	{
		WriteRectangle(rectangle);
	}
}

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle exchange;
	exchange.Length = rectangle1.Length;
	exchange.Width = rectangle1.Width;
	
	rectangle1.Length = rectangle2.Length;
	rectangle1.Width = rectangle2.Width;

	rectangle2.Length = exchange.Length;
	rectangle2.Width = exchange.Width;
}

void FindRectangle(Rectangle* rectangles, int count)
{
	Rectangle max;
	max.Length = 0;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > max.Length)
		{
			max = rectangles[i];
		}
	}
	cout << "The biggest length: " << endl;
	WriteRectangle(max);
}

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	Rectangle max;
	double maxSquare = 0;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length * rectangles[i].Width > maxSquare)
		{
			max = rectangles[i];
		}
	}
	cout << "The biggest square: " << maxSquare << endl;
	WriteRectangle(max);
}