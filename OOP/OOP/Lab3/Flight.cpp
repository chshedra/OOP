#include "Flight.h"
#include <string>

void Flight::SetFlightNumber(const string &flightNumber)
{
	this->_flightNumber = flightNumber;
}

void Flight::SetDeparturePoint(const string &departurePoint)
{
	this->_departurePoint = departurePoint;
}

void Flight::SetDestination(const string &destination)
{
	this->_destination = destination;
}

void Flight::SetDepartureTime(Time *departureTime)
{
	if (departureTime == nullptr)
	{
		Time nullTime(0, 0, 0, 0, 0);
		this->_departureTime = nullTime;
	}
	else
	{
		this->_departureTime = *departureTime;
	}
}

void Flight::SetArriveTime(Time *arriveTime)
{
	if (arriveTime == nullptr)
	{
		Time nullTime(0, 0 , 0 , 0 ,0);
		this->_arriveTime = nullTime;
	}
	else
	{
		if (this->_departureTime > * arriveTime)
		{
			throw("Время вылета не может быть больше времени прибытия");
		}
		else
		{
			this->_arriveTime = *arriveTime;
		}
	}
}

Flight::Flight() : Flight(" ", " ", " ", nullptr, nullptr) {}


Flight::Flight(const string& flightNumber, const string& departurePoint,
	const string& destination, Time* arriveTime, Time* departureTime) 
{
	this->SetFlightNumber(flightNumber);
	this->SetDeparturePoint(departurePoint);
	this->SetDestination(destination);
	this->SetArriveTime(arriveTime);
	this->SetDepartureTime(departureTime);
}

string Flight::GetFlightNumber()
{
	return this->_flightNumber;
}

string Flight::GetDeparturePoint()
{
	return this->_departurePoint;
}

string Flight::GetDestination()
{
	return this->_destination;
}

Time Flight::GetDepartureTime()
{
	return this->_departureTime;
}

Time Flight::GetArriveTime()
{
	return this->_arriveTime;
}

Time Flight::GetFlightTimeMinutes()
{
	return  _arriveTime - _departureTime;
}

ostream& operator<<(ostream& writeFlight, Flight& flight)
{
	Time getTime = flight.GetFlightTimeMinutes();
	writeFlight << flight._flightNumber << " " << flight._departurePoint
		<< "-" << flight._destination
		<< " Вылет: " << flight._departureTime
		<< "  Прилет: " << flight._arriveTime
		<< "  Время полета: " << getTime ;

	return writeFlight;
}