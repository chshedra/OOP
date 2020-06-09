#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
private:
	double _percent;

public:
	void SetPercent(double percent);

	double GetPercent();

	PercentDiscount(CategoryType category, double percent);

	double Calculate(Product& product);
};