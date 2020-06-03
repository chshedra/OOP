#include "Teacher.h"

void Teacher::SetPosition(string position)
{
	this->_position = position;
}

string Teacher::GetPosition()
{
	return this->_position;
}

Teacher::Teacher() : Teacher(" ", " ", " ", " ") {}

Teacher::Teacher(string surname, string name, string patronymic,
	string position) : Person(surname, name, patronymic)
{
	this->SetPosition(position);
}