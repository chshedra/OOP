#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
	return value < 0 ? true : false;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	return value < min || value > max ? false : true;
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (IsValuePositive(value) == true)
	{
		throw NegativeValue();
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (IsValueInRange(value, min, max) == false)
	{
		throw OutOfRange();
	}
}