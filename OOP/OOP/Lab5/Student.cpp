#include "Student.h"

void Student::SetRecordBookNumber(int recordBookNumber)
{
	const int maxRecordBookNumber = 99999999;
	DoubleValidator::AssertValueInRange(recordBookNumber, 0,
		maxRecordBookNumber);

	this->_recordBookNumber = recordBookNumber;
}

void Student::SetEntranceYear(int entranceYear)
{
	DoubleValidator::AssertValueInRange(entranceYear, 0, GetPresentYear());

	this->_entranceYear = entranceYear;
}

int Student::GetRecordBookNumber()
{
	return _recordBookNumber;
}

int Student::GetEntranceYear()
{
	return _entranceYear;
}

Student::Student() : Student(" ", " ", " ", 0, 0) {}

Student::Student(const string &surname, const string& name, 
	const string& patronymic, int recordBookNumber, int entranceYear) :
	Person(surname, name, patronymic)
{
	this->SetRecordBookNumber(recordBookNumber);
	this->SetEntranceYear(entranceYear);
}