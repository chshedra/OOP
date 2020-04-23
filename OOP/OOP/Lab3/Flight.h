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


	Flight();
	Flight(string flightNumber, string departurePoint, string destination,
		Time arriveTime, Time departureTime);
	Time GetFlightTimeMinutes();
};

void DemoFlightWithTime();
