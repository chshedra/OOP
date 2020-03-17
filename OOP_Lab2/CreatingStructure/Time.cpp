#include <iostream>
#include "Time.h"
using namespace std;

void DemoTime()
{
	//TODO:+Форматирование кода, сгруппированные логические части кода лучше разделять пустыми строками
	Time newTime;

	newTime.Hours = 4;
	newTime.Minutes = 45;
	newTime.Seconds = 3;

	cout << "TIME" << endl;
	cout << "Enter the hour: ";
	cin >> newTime.Hours;
	cout << "Enter the minutes: ";
	cin >> newTime.Minutes;
	cout << "Enter the seconds: ";
	cin >> newTime.Seconds;

	cout << newTime.Hours << ":" << newTime.Minutes
		<< ":" << newTime.Seconds << endl;

	//2.2.4
	Time* pointer = &newTime;
	cout << "Pointer" << endl
		<< pointer->Hours << " "
		<< pointer->Minutes << " "
		<< pointer->Seconds << endl;

	pointer->Hours = 10;
	pointer->Minutes = 34;
	pointer->Seconds = 56;

	Time* pointer2 = &newTime;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
}

void AutoTime()
{
	const int size = 3;
	Time array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].Hours = 10 + i;
		array[i].Minutes = 20 * i;
		array[i].Seconds = 30 + i;
		cout << array[i].Hours << " " << array[i].Minutes
			<< " " << array[i].Seconds << endl;
	}
}

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* time = new Time;

	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;

	return time;
}

Time* CopyTime(Time& time)
{
	Time* copiedTime = new Time;

	copiedTime->Hours = time.Hours;
	copiedTime->Minutes = time.Minutes;
	copiedTime->Seconds = time.Seconds;

	return copiedTime;
}

void DemoMakeCopyTime()
{
	Time* time = MakeTime(20, 45, 23);

	Time* copiedTime = CopyTime(*time);

	cout << time->Hours << ":" << time->Minutes << ":"
		<< time->Seconds << endl;

	cout << copiedTime->Hours << ":" << copiedTime->Minutes << ":"
		<< copiedTime->Seconds << endl;
}