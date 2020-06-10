#include "Product.h"

void Product::SetName(const string& name)
{
	_name = name;
}

void Product::SetCategory(CategoryType category)
{
	_category = category;
}

void Product::SetPrice(double price)
{
	const int maxPrice = 100000;
	DoubleValidator::AssertValueInRange(price, 0, maxPrice);
	_price = price;
}

string Product::GetName() 
{
	return _name; 
}

CategoryType Product::GetCategory() 
{
	return _category; 
}

double Product::GetPrice() 
{
	return _price; 
}

Product::Product() : Product(" ", 0.0, Appliances) {}

Product::Product(const string& name, double price, CategoryType category)
{
	SetName(name);
	SetPrice(price);
	SetCategory(category);
}

