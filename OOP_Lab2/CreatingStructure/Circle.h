#pragma once
#include <iostream>
using namespace std;

struct Circle
{
	double X;
	double Y;
	double Radius;
	string Color;
};

//TODO:+ ����� ��������� �������
Circle* MakeCircle(double x, double y, double radius, 
	const string &color);
Circle* CopyCircle(Circle& circle);
void DemoCircle();