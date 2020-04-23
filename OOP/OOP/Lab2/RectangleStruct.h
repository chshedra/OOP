#pragma once
#include <iostream>
using namespace std;

struct Rectangle
{
	double Length;
	double Width;
	string Color;
};

void DemoRectangle();
void AutoRectangle();
void ReadRectangle(Rectangle& rectangle);
void WriteRectangle(Rectangle& rectangle);
void DemoWriteAndReadRectangle(Rectangle& rectangle);
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);
void FindRectangle(Rectangle* rectangles, int count);
void FindMaxRectangle(Rectangle* rectangles, int count);