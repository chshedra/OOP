#include <iostream>
#include "CategoryType.h"
#include "../Common/DoubleValidator.h"
using namespace std;

class Product
{
private:
	string _name;
	double _price;
	CategoryType _category;

public:
	void SetName(const string& name);
	void SetPrice(double price);
	void SetCategory(CategoryType category);

	//TODO: —сылка?
	string GetName();
	double GetPrice();
	CategoryType GetCategory();

	Product();
	Product(const string& name, double price, CategoryType category);
};