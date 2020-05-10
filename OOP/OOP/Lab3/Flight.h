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
	void SetFlightNumber(const string &flightNumber);
	void SetDeparturePoint(const string &departurePoint);
	void SetDestination(const string &destination);
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
	Flight(const string &flightNumber, const string &departurePoint, 
		const string &destination, Time *arriveTime, Time *departureTime);

};

void DemoFlightWithTime();
