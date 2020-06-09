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

	//TODO: Почему указатель? 
	// потому что передаем объект класса, в прошлых лабах вы так говорили делать 
	// да и в методичке так написано
	// TODO: Вопрос - есть ли в этом смысл. Внутри выполняется расчёт на основе данных объекта
	// TODO: поэтому правильнее передать по константной ссылке. А по методичке - значит там не корректно
	virtual double Calculate(Product* product) = 0;

protected:
	DiscountBase(CategoryType category);
};