#pragma once

//TODO:+������ �� ������� �����������?
static class DoubleValidator
{
public:

	static class NegativeValue {};
	static class OutOfRange {};

	static bool IsValuePositive(double value);
	static bool IsValueInRange(double value, double min, double max);
	static void AssertPositiveValue(double value);
	static void AssertValueInRange(double value, double min, double max);
};


