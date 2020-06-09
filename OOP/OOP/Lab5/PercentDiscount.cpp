#include "PercentDiscount.h"

void PercentDiscount::SetPercent(double percent)
{
	DoubleValidator::AssertValueInRange(percent, 0, 100);
	_percent = percent;
}

double PercentDiscount::GetPercent() 
{ 
	return _percent;
}

PercentDiscount::PercentDiscount(CategoryType category, double percent) :
	DiscountBase(category)
{
	SetPercent(percent);
}

double PercentDiscount::Calculate(Product& product)
{
	return (DiscountBase::GetCategory() == product.GetCategory())
		? product.GetPrice() * 0.01 * (100 -_percent)
		: product.GetPrice();
}