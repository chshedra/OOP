#pragma once
#include "Product.h"
#include "../Common/DoubleValidator.h"

class DiscountBase
{
private:
	CategoryType _category;

public:
	void SetCategory(CategoryType category);

	CategoryType GetCategory();

	virtual double Calculate(Product* product) = 0;

protected:
	DiscountBase(CategoryType category);
};