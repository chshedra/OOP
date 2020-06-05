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

	//TODO: ѕочему указатель? 
	// потому что передаем объект класса, в прошлых лабах вы так говорили делать 
	// да и в методичке так написано
	virtual double Calculate(Product* product) = 0;

protected:
	DiscountBase(CategoryType category);
};