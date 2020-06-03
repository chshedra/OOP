#pragma once
#pragma once
#include <iostream>
#include "../Common/Common.h"
#include "../Common/DoubleValidator.h"
using namespace std;

class Person
{
protected:
	string _name;
	string _surname;
	string _patronymic;

public:
	void SetName(string name);
	void SetSurname(string surname);
	void SetPatronymic(string patronymic);

	string GetName();
	string GetSurname();
	string GetPatronymic();

	Person();
	Person(string surname, string name, string patronymic);
};
