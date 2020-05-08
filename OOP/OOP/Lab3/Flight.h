#pragma once
#include <iostream>
using namespace std;
#include "Time.h"

class Flight
{
private:
	string _flightNumber;
	string _departurePoint;
	string _destination;
	Time _arriveTime;
	Time _departureTime;

public:
	//TODO: ������ �� ������?
	void SetFlightNumber(string flightNumber);
	void SetDeparturePoint(string departurePoint);
	void SetDestination(string destination);
	void SetArriveTime(Time arriveTime);
	void SetDepartureTime(Time departureTime);

	string GetFlightNumber();
	string GetDeparturePoint();
	string GetDestination();
	Time GetDepartureTime();
	Time GetArriveTime();

	Time GetFlightTimeMinutes();

	friend ostream& operator<<(ostream& writeFlight, Flight& flight);

	Flight();
	//TODO: ������ �� ������?
	Flight(string flightNumber, string departurePoint, string destination,
		//TODO: ������ �� �� ���������?
		Time arriveTime, Time departureTime);
};

void DemoFlightWithTime();
