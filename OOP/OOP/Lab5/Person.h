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
	void SetName(const string &name);
	void SetSurname(const string &surname);
	void SetPatronymic(const string &patronymic);

	//TODO: Возврат по ссылке?
	string GetName();
	string GetSurname();
	string GetPatronymic();

	Person();
	Person(const string &surname, const string& name, const string& patronymic);
};
