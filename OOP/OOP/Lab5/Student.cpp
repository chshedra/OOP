#include "Student.h"

void Student::SetRecordBookNumber(int recordBookNumber)
{
	DoubleValidator::AssertPositiveValue(recordBookNumber);

	const int maxRecordBookNumber = 99999999;
	DoubleValidator::AssertValueInRange(recordBookNumber, 0,
		maxRecordBookNumber);

	this->_recordBookNumber = recordBookNumber;
}

void Student::SetEntranceYear(int entranceYear)
{
	DoubleValidator::AssertPositiveValue(entranceYear);
	DoubleValidator::AssertValueInRange(entranceYear, 0, GetPresentYear());

	this->_entranceYear = entranceYear;
}

int Student::GetRecordBookNumber()
{
	return this->_recordBookNumber;
}

int Student::GetEntranceYear()
{
	return this->_entranceYear;
}

Student::Student() : Student(" ", " ", " ", 0, 0) {}

Student::Student(string surname, string name, string patronymic,
	int recordBookNumber, int entranceYear) :
	Person(surname, name, patronymic)
{
	this->SetRecordBookNumber(recordBookNumber);
	this->SetEntranceYear(entranceYear);
}