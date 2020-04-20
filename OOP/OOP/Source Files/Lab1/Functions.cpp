#include <iostream>
using namespace std;

double GetPower(double base, int exponent);
void DemoGetPower(double base, int exponent);
void RoundToTens(int& value);

void Functions()
{
	//1.1.3.1
	double base = 2.7;
	int exponent = 5;
	double result;

	for (int i = 0; i < 3; i++)
	{
		DemoGetPower(base, exponent);
		base++;
		exponent--;
	}

	int value = 16;
	cout << "For " << value << " rounded value is ";
	RoundToTens(value);
	cout << value << endl;
	value = 92;
	cout << "For " << value << " rounded value is ";
	RoundToTens(value);
	cout << value << endl;
	value = 450;
	cout << "For " << value << " rounded value is ";
	RoundToTens(value);
	cout << value << endl;
}

//1.1.3.2
double GetPower(double base, int exponent)
{
	double result = pow(base, exponent);
	return result;
}

//1.1.3.3
void DemoGetPower(double base, int exponent)
{
	double result;
	result = GetPower(base, exponent);
	cout << base << "^" << exponent << "=" << result << endl;
}

//1.1.3.4
void RoundToTens(int& value)
{
	if (value % 10 < 5)
	{
		value = (value - value % 10);
	}
	else
	{
		value = (value + (10 - value % 10));
	}
}

