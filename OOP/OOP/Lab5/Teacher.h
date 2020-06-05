#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	string _position;

public:
	//TODO: Константные ссылки?
	void SetPosition(string position);

	string GetPosition();

	Teacher();
	Teacher(string surname, string name, string patronymic,
		string position);
};