#include <iostream>
#include "CategoryType.h"
#include "../Common/DoubleValidator.h"
using namespace std;

class Product
{
private:
	string _name;
	int _price;
	CategoryType _category;

public:
	//TODO: +Константные ссылки?
	void SetName(const string& name);
	void SetPrice(double price);
	void SetCategory(CategoryType category);

	string GetName();
	double GetPrice();
	CategoryType GetCategory();

	Product();
	Product(const string& name, double price, CategoryType category);
};