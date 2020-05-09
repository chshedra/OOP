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

void Flight::SetDepartureTime(Time departureTime)
{
	this->_departureTime = departureTime;
}

void Flight::SetArriveTime(Time arriveTime)
{
	if (this->_departureTime > arriveTime)
	{
		throw("Время вылета не может быть больше времени прибытия");
	}
	this->_arriveTime = arriveTime;
}

Flight::Flight() : _flightNumber(" "), _departurePoint(" "), _destination(" ")
{
	Time arriveTime; 
	this->SetArriveTime(arriveTime);
	Time departureTime;
	this->SetDepartureTime(departureTime);
}

Flight::Flight(const string& flightNumber, const string& departurePoint,
	const string& destination, Time* arriveTime, Time* departureTime) :
	_flightNumber(flightNumber), _departurePoint(departurePoint),
	_destination(destination), _arriveTime(*arriveTime),
	_departureTime(*departureTime) {}

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

void DemoFlightWithTime()
{
	const int size = 5;
	Flight* flights = new Flight[size];

	for (int i = 0; i < size; i++)
	{
		string writeI = std::to_string(i);
		flights[i].SetFlightNumber("S105" + writeI);
		flights[i].SetDeparturePoint("Moscow" + writeI);
		flights[i].SetDestination("Tomsk" + writeI);
		Time departureTime(2020, 1 + i, 10 + i, 12 + i, 30 + i);
		flights[i].SetDepartureTime(departureTime);
		Time arriveTime(2020, 1 + i, 10 + i, 16 + i, 59 - i);
		flights[i].SetArriveTime(arriveTime);
	}

	for (int i = 0; i < size; i++)
	{
		cout << flights[i] << endl;
	}
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