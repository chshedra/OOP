#include "DiscountBase.h"

void  DiscountBase::SetCategory(CategoryType category)
{
	_category = category;
}

CategoryType DiscountBase::GetCategory()
{
	return _category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}