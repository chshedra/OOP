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
	//TODO: Строку по ссылке?
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
	//TODO: Строку по ссылке?
	Flight(string flightNumber, string departurePoint, string destination,
		//TODO: Почему не по указателю?
		Time arriveTime, Time departureTime);
};

void DemoFlightWithTime();
