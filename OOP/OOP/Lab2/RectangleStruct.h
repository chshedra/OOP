#pragma once
#include <iostream>
using namespace std;

struct RectangleStruct
{
	double Length;
	double Width;
	string Color;
};

void DemoRectangle();
void AutoRectangle();
void ReadRectangle(RectangleStruct& rectangle);
void WriteRectangle(RectangleStruct& rectangle);
void DemoWriteAndReadRectangle(RectangleStruct& rectangle);
void Exchange(RectangleStruct& rectangle1, RectangleStruct& rectangle2);
void FindRectangle(RectangleStruct* rectangles, int count);
void FindMaxRectangle(RectangleStruct* rectangles, int count);