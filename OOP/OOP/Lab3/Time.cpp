#include "Time.h"

void Time::SetYear(int year)
{
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if (month > 12 || month < 0)
	{
		throw("�������� ������ ������ ���������� � ��������� 1-12");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if (day > 30 || day < 0)
	{
		throw("�������� ��� ������ ���������� � ��������� 1-30");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if (hour >= 24 || hour < 0)
	{
		throw("�������� ���� ������ ���������� � ��������� 1-23");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if (minute >= 60 || minute < 0)
	{
		throw("�������� ����� ������ ���������� � ��������� 1-59");
	}
	this->_minute = minute;
}

Time::Time()
{
	this->SetYear(0);
	this->SetMonth(0);
	this->SetDay(0);
	this->SetHour(0);
	this->SetMinute(0);
}

Time::Time(int year, int month, int day, int hour, int minute)
{
	this->SetYear(year);
	this->SetMonth(month);
	this->SetDay(day);
	this->SetHour(hour);
	this->SetMinute(minute);
}

int Time::GetYear()
{
	return this->_year;
}
int Time::GetMonth()
{
	return this->_month;
}
int Time::GetDay()
{
	return this->_day;
}
int Time::GetHour()
{
	return this->_hour;
}
int Time::GetMinute()
{
	return this->_minute;
}

bool Time::operator>(Time time) const
{
	if (_year > time._year)
	{
		return true;
	}
	else if (_month > time._month)
	{
		return true;
	}
	else if (_day > time._day)
	{
		return true;
	}
	else if (_hour > time._hour)
	{
		return true;
	}
	else if (_minute > time._minute)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

Time Time::operator-(Time time) const
{
	int year = _year - time._year;
	if (year < 0)
	{
		throw("������� ������� ���� �� ����� ������");
	}
	int month = _month - time._month;
	if (month < 0)
	{
		year--;
		month += 12;
	}
	int day = _day - time._day;
	if (day < 0)
	{
		month--;
		day += 30;
	}
	int hour = _hour - time._hour;
	if (hour < 0)
	{
		day--;
		hour += 24;
	}
	int minute = _minute - time._minute;
	if (minute < 0)
	{
		hour--;
		minute += 60;
	}

	return Time(year, month, day, hour, minute);
}
