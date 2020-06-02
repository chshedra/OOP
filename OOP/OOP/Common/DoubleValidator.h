#pragma once

//TODO: Почему не сделать статическим?
class DoubleValidator
{
public:

	class NegativeValue {};
	class OutOfRange {};

	bool IsValuePositive(double value);
	bool IsValueInRange(double value, double min, double max);
	void AssertPositiveValue(double value);
	void AssertValueInRange(double value, double min, double max);
};


