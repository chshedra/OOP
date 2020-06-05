#include "Teacher.h"

void Teacher::SetPosition(const string& position)
{
	this->_position = position;
}

string Teacher::GetPosition()
{
	return this->_position;
}

Teacher::Teacher() : Teacher(" ", " ", " ", " ") {}

Teacher::Teacher(const string& surname, const string& name, const string& patronymic,
	const string& position) : Person(surname, name, patronymic)
{
	this->SetPosition(position);
}