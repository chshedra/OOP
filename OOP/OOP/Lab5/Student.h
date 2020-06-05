#pragma once
#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int _recordBookNumber;
	int _entranceYear;

public:
	void SetRecordBookNumber(int recordBookNumber);
	void SetEntranceYear(int entranceYear);

	int GetRecordBookNumber();
	int GetEntranceYear();

	Student();
	//TODO: Константные ссылки?
	Student(string surname, string name, string patronymic,
		int recordBookNumber, int entranceYear);
};

