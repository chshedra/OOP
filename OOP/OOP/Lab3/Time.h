#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;
public:
	void SetYear(int year);
	void SetMonth(int month);
	void SetDay(int day);
	void SetHour(int hour);
	void SetMinute(int minute);

	int GetYear();
	int GetMonth();
	int GetDay();
	int GetHour();
	int GetMinute();

	//������������� �������� ��������� ��� ������� SetArriveTime
	bool operator>(Time) const;
	//������������� �������� ��������� ��� ������� GetFlightTimeMinutes
	Time operator-(Time) const; 
	//������������� �������� ������ ������� ������ Time
	friend ostream& operator<<(ostream& writeTime, Time& time);

	Time();
	Time(int year, int month, int day, int hour, int minute);
};