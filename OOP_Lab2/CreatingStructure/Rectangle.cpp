#include <iostream>
#include "Rectangle.h"
using namespace std;

void DemoRectangle()
{
	Rectangle object;
	object.Length = 3.5;
	object.Width = 7.99;
	object.Color = "Red";

	Rectangle newRectangle;
	cout << "RECTANGLE" << endl;
	cout << "Enter the length: ";
	cin >> newRectangle.Length;
	cout << "Enter the width: ";
	cin >> newRectangle.Width;
	cout << "Enter the colour: ";
	cin >> newRectangle.Color;
	cout << object.Length << " " << object.Width
		<< " " << object.Color << endl;
	cout << endl;
	//2.2.4
	Rectangle* pointer = &object;
	cout << "Pointer" << endl
		<< pointer->Length << " "
		<< pointer->Width << " "
		<< pointer->Color << endl;
	pointer->Length = 10.9;
	pointer->Width = 34.7;
	pointer->Color = "Blue";
	Rectangle* pointer2 = &object;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
	WriteRectangle(object);
	WriteRectangle(newRectangle);

	Exchange(object, newRectangle);

	WriteRectangle(object);
	WriteRectangle(newRectangle);

}

void AutoRectangle()
{
	const int size = 3;
	Rectangle array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].Length = 1.5 + i;
		array[i].Width = 2.7 * i;
		array[i].Color = "Red" + i;
		cout << array[i].Length << " " << array[i].Width
			<< " " << array[i].Color << endl;
	}

	FindRectangle(array, size);
	cout << endl;
	FindMaxRectangle(array, size);
}

void WriteRectangle(Rectangle& rectangle)
{
	cout << "Length: " << rectangle.Length << endl
		<< "Width: " << rectangle.Width << endl;
}

void ReadRectangle(Rectangle& rectangle)
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

